
undefined8 FUN_1003a66d0(long param_1,short param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0x1b) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar3 = param_4 + 0xb8;
    piVar1 = (int *)(param_4 + 0x148);
    if (*(int *)(param_4 + 0x148) == 0) {
      FUN_1003a2100(lVar3,piVar1);
    }
    lVar4 = *(long *)(param_4 + 0x150);
    lVar6 = lVar4;
    if (lVar4 == 0) {
      lVar6 = *(long *)(param_4 + 0x160);
    }
    if (*piVar1 == 0) {
      FUN_1003a2100(lVar3,piVar1);
      lVar4 = *(long *)(param_4 + 0x150);
    }
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_4 + 0x160);
    }
    if (*piVar1 == 0) {
      FUN_1003a2100(lVar3,piVar1);
      lVar4 = *(long *)(param_4 + 0x150);
    }
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_4 + 0x160);
    }
    FUN_10038e8e0(uVar2,"aL=%s.y;\nfor(int k = 0; k < %s.x; k++, aL+=%s.z)\n{",lVar6,lVar5,lVar4);
  }
  else if (param_2 == 0x26) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar3 = *(long *)(param_4 + 0x98);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar2,"for(int k = 0; k < %s.x; k++)\n{\n",lVar3);
  }
  return 0;
}

