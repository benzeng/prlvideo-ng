
bool FUN_1008977c0(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_34;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN_100895fc0(param_5,param_4);
    *(long **)(param_1 + 0x20) = plVar3;
    if (plVar3 == (long *)0x0) {
      return false;
    }
  }
  if (param_3 == 0) {
    iVar2 = FUN_1008926d0(param_5,&local_34);
    if (iVar2 < 1) {
LAB_100897895:
      FUN_100887ce0(6,0xa1,0x9e,"m_sigver.c",0x53);
      return false;
    }
    uVar4 = FUN_100821930(local_34);
    param_3 = FUN_100890b60(uVar4);
    if (param_3 == 0) goto LAB_100897895;
    plVar3 = *(long **)(param_1 + 0x20);
  }
  if (param_6 == 0) {
    pcVar1 = *(code **)(*plVar3 + 0x70);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(plVar3,param_1);
      if (iVar2 < 1) {
        return false;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20) = 0x40;
      goto LAB_1008978ce;
    }
    iVar2 = FUN_100896850();
  }
  else {
    pcVar1 = *(code **)(*plVar3 + 0x80);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(plVar3,param_1);
      if (iVar2 < 1) {
        return false;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20) = 0x80;
      goto LAB_1008978ce;
    }
    iVar2 = FUN_1008969f0();
  }
  if (iVar2 < 1) {
    return false;
  }
LAB_1008978ce:
  bVar5 = false;
  iVar2 = FUN_1008964c0(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (0 < iVar2) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = FUN_10088a720(param_1,param_3,param_4);
    bVar5 = iVar2 != 0;
  }
  return bVar5;
}

