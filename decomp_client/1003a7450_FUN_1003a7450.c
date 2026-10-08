
void FUN_1003a7450(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  QArrayData *local_80;
  long local_78;
  QArrayData *local_70;
  long local_68;
  char local_59;
  long local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::sender();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar2 == 0) goto LAB_1003a7653;
  iVar7 = 0;
  if (-1 < param_2) {
    CSdkRequest::getResultParam((uint)&local_58);
    local_59 = '\0';
    local_68 = local_58;
    if (local_58 != 0) {
      _PrlHandle_AddRef();
    }
    local_70 = (QArrayData *)QString::fromAscii_helper("hard_disks_size",0xf);
    uVar3 = SdkUtils::getParamUInt64Value(&local_68,&local_70,&local_59);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003a7540;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1003a7540:
    if (local_68 != 0) {
      _PrlHandle_Free();
    }
    iVar6 = 0;
    iVar7 = 0;
    if (local_59 != '\0') {
      local_78 = local_58;
      if (local_58 != 0) {
        _PrlHandle_AddRef();
      }
      local_80 = (QArrayData *)QString::fromAscii_helper("after_compact_hard_disks_size",0x1d);
      uVar4 = SdkUtils::getParamUInt64Value(&local_78,&local_80,&local_59);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003a75c6;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003a75c6:
      if (local_78 != 0) {
        _PrlHandle_Free();
      }
      iVar7 = iVar6;
      if (((uVar4 != 0) && (uVar3 != 0)) && (local_59 != '\0')) {
        iVar7 = (int)(uVar3 >> 0x14) - (int)(uVar4 >> 0x14);
      }
    }
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
  }
  puVar5 = (undefined8 *)FUN_1003ae2f0(param_1 + 0x38,&local_40);
  piVar1 = (int *)*puVar5;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)*puVar5 != (void *)0x0)) {
      operator_delete((void *)*puVar5);
    }
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_100836830(*(undefined8 *)(param_1 + 0x10),&local_40,iVar7);
LAB_1003a7653:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

