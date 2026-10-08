
void FUN_100328d60(QObject *param_1)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  ulong in_RAX;
  CSdkCommunicator *pCVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong local_28;
  
  local_28 = in_RAX;
  FUN_100327cd0();
  *(undefined ***)param_1 = &PTR_FUN_10220bb80;
  *(undefined4 *)(param_1 + 0x48) = 2;
  pCVar4 = operator_new(0x38);
  CSdkCommunicator::CSdkCommunicator(pCVar4,0,2);
  *(undefined **)pCVar4 = &DAT_1021efa10;
  uVar5 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  *(undefined8 *)(pCVar4 + 0x28) = uVar5;
  *(QObject **)(pCVar4 + 0x30) = param_1;
  *(CSdkCommunicator **)(param_1 + 0x50) = pCVar4;
  if ((DAT_102312230 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312230), iVar3 != 0)) {
    DAT_102312228 = (uint *)PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_10032ba30,&DAT_102312228,0x100000000);
    ___cxa_guard_release(&DAT_102312230);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_28,uVar5);
  uVar1 = local_28;
  if (1 < *DAT_102312228) {
    FUN_10032bc20(&DAT_102312228);
  }
  puVar2 = *(uint **)(DAT_102312228 + 4);
  puVar10 = (uint *)0x0;
  if (*(uint **)(DAT_102312228 + 4) == (uint *)0x0) {
    puVar8 = DAT_102312228 + 2;
  }
  else {
    do {
      while (puVar8 = puVar2, uVar9 = *(ulong *)(puVar8 + 6), uVar1 <= uVar9) {
        puVar2 = *(uint **)(puVar8 + 2);
        puVar10 = puVar8;
        if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100328e95;
      }
      puVar2 = *(uint **)(puVar8 + 4);
    } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
    if (puVar10 != (uint *)0x0) {
      uVar9 = *(ulong *)(puVar10 + 6);
LAB_100328e95:
      if (uVar9 <= uVar1) {
        *(QObject **)(puVar10 + 8) = param_1;
        goto LAB_100328ec8;
      }
    }
  }
  lVar6 = QMapDataBase::createNode((int)DAT_102312228,0x28,(QMapNodeBase *)0x8,SUB81(puVar8,0));
  *(ulong *)(lVar6 + 0x18) = uVar1;
  *(QObject **)(lVar6 + 0x20) = param_1;
LAB_100328ec8:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2vmDesktopIOStateChanged(const GUI::VmId&, PRL_IO_STATE)",
                "2vmDesktopIOStateChanged(const GUI::VmId&, PRL_IO_STATE)",0);
  return;
}

