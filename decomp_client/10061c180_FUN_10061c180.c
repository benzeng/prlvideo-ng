
undefined8 * FUN_10061c180(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_10061aab0(param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_10061aab0(param_2), iVar1 != -0x7ffeefa8)) &&
      (iVar1 = FUN_10061aab0(param_2), iVar1 != -0x7ffeefff)) &&
     (((iVar1 = FUN_10061aab0(param_2), iVar1 != -0x7ffeef8c &&
       (iVar1 = FUN_10061aab0(param_2), iVar1 != -0x7ffeef89)) &&
      (iVar1 = FUN_10061aab0(param_2), iVar1 != -0x7ffeef9b)))) {
switchD_10061c20c_caseD_4:
    puVar3 = PTR_shared_null_1021e1288;
    goto LAB_10061c23b;
  }
  if (param_3 == 0) {
switchD_10061c20c_caseD_2:
    puVar3 = (undefined *)QString::fromAscii_helper("Server",6);
  }
  else {
    uVar2 = FUN_100b7fb80(param_3);
    switch(uVar2) {
    case 0:
      puVar3 = (undefined *)QString::fromAscii_helper("Any",3);
      break;
    case 1:
    case 6:
    case 7:
      puVar3 = (undefined *)QString::fromAscii_helper("Desktop",7);
      break;
    case 2:
      goto switchD_10061c20c_caseD_2;
    case 3:
      puVar3 = (undefined *)QString::fromAscii_helper("Workstation",0xb);
      break;
    default:
      goto switchD_10061c20c_caseD_4;
    case 5:
      puVar3 = (undefined *)QString::fromAscii_helper("Desktop Express",0xf);
    }
  }
LAB_10061c23b:
  *param_1 = puVar3;
  return param_1;
}

