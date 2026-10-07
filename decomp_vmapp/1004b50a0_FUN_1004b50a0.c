
undefined1 FUN_1004b50a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  plVar5 = _malloc(0x20);
  uVar7 = 2;
  if (plVar5 != (long *)0x0) {
    *plVar5 = param_1;
    *(undefined4 *)(plVar5 + 1) = uVar3;
    plVar5[2] = lVar1;
    plVar5[3] = -1;
    lVar2 = *(long *)(param_1 + 0x28);
    uVar6 = FUN_100529f20(lVar1);
    uVar3 = FUN_100529f30(*(undefined8 *)(param_2 + 0x10));
    iVar4 = FUN_100519b00(lVar2 + 0x38,param_2,uVar6,uVar3,FUN_1004b52b0,plVar5,FUN_1004b54f0,plVar5
                         );
    uVar7 = iVar4 == 1;
  }
  return uVar7;
}

