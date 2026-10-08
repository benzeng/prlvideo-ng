
undefined1 FUN_1003439e0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
       (*(long *)(param_1 + 0x18) != 0)) {
      uVar4 = FUN_100152280();
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_100323d90(&local_28,uVar6);
      lVar5 = FUN_1001548f0(uVar4,&local_28);
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          local_19 = *(int *)local_28 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100343aa9;
        }
        QArrayData::deallocate(local_28,2,8);
      }
LAB_100343aa9:
      if ((((lVar5 != 0) &&
           ((iVar3 = FUN_10018a9d0(lVar5), iVar3 == 0x30000004 ||
            (iVar3 = FUN_10018a9d0(lVar5), iVar3 == 0x30000003)))) &&
          (cVar1 = FUN_10018ff50(lVar5), cVar1 == '\0')) &&
         (cVar1 = FUN_10018ffc0(lVar5), cVar1 == '\0')) {
        uVar6 = FUN_10018c280(lVar5);
        iVar3 = FUN_100319d30(uVar6);
        if (iVar3 == 1) {
          uVar6 = FUN_10018c280(lVar5);
          uVar6 = FUN_100319c50(uVar6);
          cVar1 = FUN_100330bf0(uVar6);
          if (cVar1 == '\0') {
            return 1;
          }
        }
      }
      uVar2 = 0;
      if (2 < DAT_10230ffd0) {
        if (lVar5 != 0) {
          uVar6 = FUN_10018c280(lVar5);
          uVar6 = FUN_100319c50(uVar6);
          uVar2 = FUN_100330bf0(uVar6);
        }
        FUN_100df99c0("GUI_DDRL","prl_client_app",3,"isWaitingForCoherenceToStart()[%d]",uVar2);
        return 0;
      }
      return 0;
    }
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar7 = "m_vmDisplay is NULL";
  }
  else {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar7 = "Blocked programmatically";
  }
  FUN_100df99c0("GUI_DDRL","prl_client_app",3,pcVar7);
  return 0;
}

