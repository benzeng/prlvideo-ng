
undefined8 FUN_1003a67f0(long param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  
  if ((param_2 & 0xffff) == 0x29) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (param_4[0x24] == 0) {
      FUN_1003a2100(param_4,param_4 + 0x24);
    }
    lVar3 = *(long *)(param_4 + 0x26);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0x2a);
    }
    uVar2 = (param_2 >> 0x10 & 0xff) - 1;
    puVar5 = (undefined *)0x0;
    if (uVar2 < 6) {
      puVar5 = (&PTR_s_>_100bbd880)[(int)uVar2];
    }
    if (param_4[0x52] == 0) {
      FUN_1003a2100(param_4 + 0x2e,param_4 + 0x52);
    }
    lVar4 = *(long *)(param_4 + 0x54);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_4 + 0x58);
    }
    FUN_10038e8e0(uVar1,"if(%s.x %s %s.x)\n{\n",lVar3,puVar5,lVar4);
  }
  else if ((param_2 & 0xffff) == 0x28) {
    pcVar6 = "";
    if ((*param_4 >> 8 & 0x18 | *param_4 >> 0x1c & 7) == 0x13) {
      pcVar6 = ".x";
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (param_4[0x24] == 0) {
      FUN_1003a2100(param_4,param_4 + 0x24);
    }
    lVar3 = *(long *)(param_4 + 0x26);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0x2a);
    }
    FUN_10038e8e0(uVar1,"if(%s%s)\n{\n",lVar3,pcVar6);
  }
  return 0;
}

