
void FUN_100a3b8e0(undefined8 param_1,int param_2,undefined8 *param_3,long param_4,uint param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  long lVar7;
  uint *puVar8;
  void *pvVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  long local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  char local_41;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    return;
  }
  uVar4 = FUN_100152280();
  uVar4 = FUN_100154930(uVar4,param_4 + 8,param_4);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_41 = '\x01';
  puVar8 = (uint *)*param_3;
  if (1 < *puVar8) {
    FUN_10003cb70(param_3,puVar8[1]);
    puVar8 = (uint *)*param_3;
  }
  puVar10 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
  bVar2 = true;
  while( true ) {
    if (1 < *puVar8) {
      FUN_10003cb70(param_3,puVar8[1]);
      puVar8 = (uint *)*param_3;
    }
    if (puVar10 == puVar8 + (long)(int)puVar8[3] * 2 + 4) break;
    if (*(int *)&(*(QString **)puVar10)[2].field0_0x0 != 0) {
      if (bVar2) {
        QString::operator=(&local_40,*(QString **)puVar10);
      }
      uVar5 = FUN_10018c280(uVar4);
      uVar5 = FUN_100319c30(uVar5);
      local_50 = (QArrayData *)**(undefined8 **)puVar10;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      FUN_10032fe90(uVar5,&local_50,&local_41);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a3ba33;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100a3ba33:
      if (local_41 == '\0') {
        local_41 = '\0';
      }
      bVar2 = false;
    }
    puVar10 = puVar10 + 2;
    puVar8 = (uint *)*param_3;
  }
  if (!bVar2) {
    local_58 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    cVar3 = FUN_100a3b100(param_1,local_41 == '\0',&local_58,uVar4);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3bab8;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100a3bab8:
    if (cVar3 == '\0') goto LAB_100a3bfb5;
    puVar8 = (uint *)*param_3;
  }
  if (1 < *puVar8) {
    FUN_10003cb70(param_3,puVar8[1]);
    puVar8 = (uint *)*param_3;
  }
  puVar10 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
  iVar12 = 0;
  while( true ) {
    if (1 < *puVar8) {
      FUN_10003cb70(param_3,puVar8[1]);
      puVar8 = (uint *)*param_3;
    }
    if (puVar10 == puVar8 + (long)(int)puVar8[3] * 2 + 4) break;
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (*(int *)(*(long *)puVar10 + 0x10) == 0) {
      QString::operator=(&local_60,(QString *)(*(long *)puVar10 + 8));
    }
    else if (local_41 == '\0') {
      uVar5 = FUN_10018c280(uVar4);
      uVar5 = FUN_100319c30(uVar5);
      local_70 = (QArrayData *)**(undefined8 **)puVar10;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
      FUN_10032fd10(uVar5,&local_70,&local_60);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a3bc40;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
    else {
      uVar5 = FUN_10018c280(uVar4);
      uVar5 = FUN_100319c30(uVar5);
      local_68 = (QArrayData *)**(undefined8 **)puVar10;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      FUN_10032fdd0(uVar5,&local_68,&local_60);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a3bc40;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
LAB_100a3bc40:
    iVar1 = *(int *)(local_60.field0_0x0 + 4);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3baf0;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a3baf0:
    iVar12 = iVar12 + 2 + iVar1 * 2;
    puVar10 = puVar10 + 2;
    puVar8 = (uint *)*param_3;
  }
  if (iVar12 != 0) {
    local_78 = (QArrayData *)PTR_shared_null_1021e1288;
    puVar6 = (undefined2 *)
             FUN_100a3c290(&local_78,iVar12 + 2,
                           *(undefined4 *)(&DAT_101cd2bc4 + (ulong)param_5 * 0xc));
    lVar7 = FUN_1000a9690(param_4);
    puVar8 = (uint *)*param_3;
    if (1 < *puVar8) {
      FUN_10003cb70(param_3,puVar8[1]);
      puVar8 = (uint *)*param_3;
    }
    puVar10 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar8) {
        FUN_10003cb70(param_3,puVar8[1]);
        puVar8 = (uint *)*param_3;
      }
      if (puVar10 == puVar8 + (long)(int)puVar8[3] * 2 + 4) break;
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      if (*(int *)(*(long *)puVar10 + 0x10) == 0) {
        QString::operator=(&local_80,(QString *)(*(long *)puVar10 + 8));
      }
      else if (local_41 == '\0') {
        uVar5 = FUN_10018c280(uVar4);
        uVar5 = FUN_100319c30(uVar5);
        local_90 = (QArrayData *)**(undefined8 **)puVar10;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
        FUN_10032fd10(uVar5,&local_90,&local_80);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a3be90;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
      else {
        uVar5 = FUN_10018c280(uVar4);
        uVar5 = FUN_100319c30(uVar5);
        local_88 = (QArrayData *)**(undefined8 **)puVar10;
        if (1 < *(int *)local_88 + 1U) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + 1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
        }
        FUN_10032fdd0(uVar5,&local_88,&local_80);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a3be90;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
LAB_100a3be90:
      iVar12 = *(int *)(local_80.field0_0x0 + 4);
      pvVar9 = (void *)QString::utf16();
      uVar11 = (ulong)(iVar12 * 2 + 2);
      _memcpy(puVar6,pvVar9,uVar11);
      if (param_5 == 1 && lVar7 != 0) {
        FUN_1000b7b20(lVar7,&local_80);
      }
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a3bd20;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100a3bd20:
      puVar6 = (undefined2 *)((long)puVar6 + uVar11);
      puVar10 = puVar10 + 2;
      puVar8 = (uint *)*param_3;
    }
    *puVar6 = 0;
    FUN_10018c250(&local_98,uVar4);
    iVar12 = _PrlDevSIA_SendSIAData
                       (local_98,local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4)
                       );
    if ((iVar12 != 0) && (0 < DAT_10230ffd0)) {
      FUN_100df99c0("SIATOOL","SIAToolClient",1,"Can\'t send SIA command to vm");
    }
    if (local_98 != 0) {
      _PrlHandle_Free();
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3bfb5;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
LAB_100a3bfb5:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

