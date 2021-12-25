var nilai1;
var nilai2;
var hasil;
var operator;
var operatorSelect;
var tombol = document.querySelector(".tombolKalkulator");
var output = document.querySelector(".inputAngka");

function btn(angka) {
  if (output.value == "0") {
    output.value = angka;
  } else {
    output.value += angka;
  }
  document.querySelect(".inputAngka").value = output.value;
}
function clr(clear) {
  operatorSelect = false;
  nilai1 = 0;
  nilai2 = 0;
  output.value = 0;
}
function del() {
  output.value = output.value.slice("0", -1);
}
function koma() {
  if (output.value.includes("0") == false) {
    output.value += ".";
  }
  document.querySelector(".inputAngka").value = output.value;
}
function opr(opr) {
  nilai1 = parseFloat(output.value);
  operator = opr;
  operatorSelect = true;
  document.querySelector(".inputAngka").value = 0;
}
function hasilHitung() {
  if (operatorSelect == true) {
    nilai2 = parseFloat(output.value);
    switch (operator) {
      case '+':
        hasil = nilai1 + nilai2;
        output.value = hasil;
        break;
      case "-":
        hasil = nilai1 - nilai2;
        output.value = hasil;
        break;
      case "/":
        hasil = nilai1 / nilai2;
        output.value = hasil;
        break;
      case "*":
        hasil = nilai1 * nilai2;
        output.value = hasil;
        break;
    }
  } else {
    nilai1 = 0;
    nilai2 = 0;
    operatorSelect = false;
    hasil = 0;
  }
}
