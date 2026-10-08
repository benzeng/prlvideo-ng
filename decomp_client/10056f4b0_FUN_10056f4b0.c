
QVariant * FUN_10056f4b0(QVariant *param_1,undefined8 param_2,int *param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  
  if (param_4 == 0) {
    switch(param_3[1]) {
    case 0:
      FUN_10056f560(param_1,param_2,param_3);
      break;
    case 1:
      lVar1 = CPortForwarding::getTCP();
      if (*param_3 < *(int *)(*(long *)(lVar1 + 0x98) + 0xc) - *(int *)(*(long *)(lVar1 + 0x98) + 8)
         ) {
        pcVar2 = "TCP";
      }
      else {
        pcVar2 = "UDP";
      }
      QVariant::QVariant(param_1,pcVar2);
      break;
    case 2:
      FUN_10056f620(param_1,param_2,param_3);
      break;
    case 3:
      FUN_10056f8f0(param_1,param_2,param_3);
      break;
    default:
      goto switchD_10056f4ef_default;
    }
  }
  else {
switchD_10056f4ef_default:
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  return param_1;
}

