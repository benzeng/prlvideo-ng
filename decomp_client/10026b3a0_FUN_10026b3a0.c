
undefined8 FUN_10026b3a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm",
                  "Tasks/CTaskCloneVm.cpp",0x3a,"validateSubTask");
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return 0x80000009;
    }
  }
  uVar1 = 0x80000009;
  if ((*(int *)(lVar2 + 4) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar2 = FUN_10018d490();
    uVar1 = 0x80000009;
    if (lVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

