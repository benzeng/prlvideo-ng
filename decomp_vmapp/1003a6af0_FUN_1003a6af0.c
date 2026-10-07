
undefined8 FUN_1003a6af0(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar2 = param_2 & 0xffff;
  if (uVar2 == 0x60) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar3 = *(long *)(param_4 + 0x98);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar1,"if(%s.x) break;\n",lVar3);
  }
  else if (uVar2 == 0x2d) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar3 = *(long *)(param_4 + 0x98);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0xa8);
    }
    uVar2 = (param_2 >> 0x10 & 0xff) - 1;
    puVar5 = (undefined *)0x0;
    if (uVar2 < 6) {
      puVar5 = (&PTR_s_>_100bbd880)[(int)uVar2];
    }
    if (*(int *)(param_4 + 0x148) == 0) {
      FUN_1003a2100(param_4 + 0xb8,param_4 + 0x148);
    }
    lVar4 = *(long *)(param_4 + 0x150);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_4 + 0x160);
    }
    FUN_10038e8e0(uVar1,"if(%s.x %s %s.x) break;\n",lVar3,puVar5,lVar4);
  }
  else if (uVar2 == 0x2c) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"break;\n");
  }
  return 0;
}

