
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078eb90(long param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  double dVar10;
  double dVar11;
  long local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  Data *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = *param_2;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  cVar3 = SdkUtils::checkHandleType(&local_40,0x10000012);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  if (cVar3 == '\0') {
    return;
  }
  lVar6 = *param_2;
  local_48 = lVar6;
  if (lVar6 != 0) {
    _PrlHandle_AddRef(lVar6);
  }
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  local_58 = (QArrayData *)QString::fromAscii_helper("net.nic#.bytes_out",0x12);
  local_60 = (QArrayData *)QString::fromAscii_helper("([0-9]*)",8);
  uVar4 = QString::replace(&local_58,0x23,&local_60,1);
  FUN_1000341d0(&local_50,uVar4);
  lVar5 = FUN_10078f600(&local_48,&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078ec8a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10078ec8a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078ecba;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10078ecba:
  pDVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078ed55;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar7 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_10078ed30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_10078ed30;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10078ed55:
  if (lVar6 != 0) {
    _PrlHandle_Free(lVar6);
  }
  dVar10 = (double)lVar5;
  lVar6 = QDateTime::currentMSecsSinceEpoch();
  if (*(long *)(param_1 + 0x28) < 1) {
    *(double *)(param_1 + 0x20) = dVar10;
    *(long *)(param_1 + 0x28) = lVar6;
    dVar11 = 0.0;
  }
  else {
    dVar11 = (dVar10 - *(double *)(param_1 + 0x20)) /
             ((double)(lVar6 - *(long *)(param_1 + 0x28)) / _DAT_100e29c70);
    *(double *)(param_1 + 0x20) = dVar10;
    *(long *)(param_1 + 0x28) = lVar6;
    if (dVar11 < 0.0) {
      lVar6 = (long)((dVar11 - (double)(long)(DAT_100e110e0 + dVar11)) + DAT_100e110f0) +
              (long)(DAT_100e110e0 + dVar11);
      goto LAB_10078ee08;
    }
  }
  lVar6 = (long)(dVar11 + DAT_100e110f0);
LAB_10078ee08:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  local_78 = (long)(double)lVar6;
  QVariant::QVariant(&local_70,4,&local_78,0);
  FUN_1007864e0(uVar4,&local_70);
  QVariant::~QVariant(&local_70);
  return;
}

