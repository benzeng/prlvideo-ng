
byte FUN_1006ac270(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  CTaskGenericId *pCVar7;
  int iVar8;
  QArrayData *pQVar9;
  undefined **local_50 [3];
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  cVar3 = FUN_10069e110();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_10069dca0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  QObject::property((char *)&local_30);
  if ((local_30.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    bVar2 = true;
    cVar3 = '\0';
  }
  else {
    QVariant::toBitArray();
    lVar6 = *(long *)(local_38 + 0x10);
    iVar8 = 0;
    pQVar9 = local_38;
    if ((int)(char)local_38[lVar6] < *(int *)(local_38 + 4) * 8) {
      do {
        if (((byte)pQVar9[((iVar8 >> 3) + 1) + lVar6] >> ((byte)iVar8 & 7) & 1) != 0) {
          iVar5 = FUN_10015a6e0(uVar1);
          pQVar9 = local_38;
          if (iVar8 == iVar5) {
            iVar8 = 1;
            goto LAB_1006ac338;
          }
          lVar6 = *(long *)(local_38 + 0x10);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(pQVar9 + 4) * 8 - (int)(char)pQVar9[lVar6]);
      iVar8 = 0;
    }
LAB_1006ac338:
    cVar3 = (char)iVar8;
    if (*(int *)pQVar9 == -1) {
      bVar2 = false;
    }
    else {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_19 = *(int *)pQVar9 != 0;
        UNLOCK();
        pQVar9 = local_38;
        if ((bool)local_19) {
          bVar2 = false;
          goto LAB_1006ac371;
        }
      }
      QArrayData::deallocate(pQVar9,1,8);
      bVar2 = false;
    }
  }
LAB_1006ac371:
  QVariant::~QVariant(&local_30);
  if ((bVar2) || (cVar3 != '\0')) {
    pCVar7 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_50,0x53);
    local_50[0] = &PTR_FUN_10226c710;
    bVar4 = CTaskManager::isTaskRunning(pCVar7);
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_50);
    bVar4 = bVar4 ^ 1;
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}

