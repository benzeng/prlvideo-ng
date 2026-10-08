
void FUN_10016f530(long param_1,long *param_2,QString *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  int local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  long local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_40 = *param_2;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  bVar2 = SdkUtils::GetResultCodeFromComplexEvent(&local_38,&local_40);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  if ((local_38 == -0x7fffdfff & bVar2) != 0) {
    FUN_100800df0(param_1);
  }
  if ((-1 < local_38) && (lVar5 = FUN_10015cb20(param_1,param_3), lVar5 != 0)) {
    plVar1 = *(long **)(*(long *)(param_1 + 0xe0) + 0x180);
    local_60 = (Data *)*plVar1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar7 = (long)*(int *)(local_60 + 8);
        lVar6 = *plVar1;
        if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_60 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_60 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_48 = 1;
        plVar1 = *(long **)local_58;
        local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        (**(code **)(*plVar1 + 0xb8))(&local_78,plVar1);
        (**(code **)(*plVar1 + 0xa8))(&local_80,plVar1);
        bVar2 = FUN_1001b0280(&local_78,&local_80,&local_64,&local_70);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016f6ea;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10016f6ea:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016f71a;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10016f71a:
        if (((((bVar2 & local_64 == 2) == 1) &&
             (cVar3 = operator==(param_3,&local_70), cVar3 != '\0')) &&
            (iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1), iVar4 == 0)) &&
           (lVar6 = FUN_10018f120(lVar5,0xf,0), lVar6 != 0)) {
          (**(code **)(*plVar1 + 0xb8))(&local_88,plVar1);
          (**(code **)(*plVar1 + 0xa8))(&local_90,plVar1);
          FUN_100147a20(lVar6,&local_88,&local_90,0,0,0,0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016f802;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_10016f802:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016f840;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
LAB_10016f840:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016f870;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_10016f870:
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_60);
    }
  }
  return;
}

