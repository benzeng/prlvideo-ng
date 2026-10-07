
void FUN_1003ba3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long lVar4;
  
  puVar2 = *(undefined1 **)(param_1 + 0xa8);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0xb8);
  }
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_1003ba4c0(param_1,*(undefined4 *)(param_1 + 0x14),0);
  bVar1 = *(byte *)(param_1 + 0x14);
  if (bVar1 < 0xf) {
    pcVar3 = "i";
    switch(bVar1) {
    case 1:
      pcVar3 = "u";
      break;
    case 2:
      break;
    default:
      goto switchD_1003ba415_caseD_3;
    case 4:
      pcVar3 = "b";
      break;
    case 8:
      pcVar3 = "";
    }
  }
  else {
    if (bVar1 == 0xf) {
      pcVar3 = "a";
      goto switchD_1003ba415_caseD_2;
    }
switchD_1003ba415_caseD_3:
    pcVar3 = "?";
  }
switchD_1003ba415_caseD_2:
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0xb8);
  }
  FUN_10038e8e0(param_3,"%s%s = %s;\n",pcVar3,param_2,lVar4);
  puVar2 = *(undefined1 **)(param_1 + 0xa8);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0xb8);
  }
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

