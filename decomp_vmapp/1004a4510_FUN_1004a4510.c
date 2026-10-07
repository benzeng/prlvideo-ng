
undefined4 FUN_1004a4510(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 uVar9;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0xf0000003;
  }
  uVar6 = *(undefined4 *)(param_2 + 8);
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::resize((int)&local_50);
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  FUN_1002a5990(param_2,0,local_50 + *(long *)(local_50 + 0x10),uVar6);
  iVar5 = FUN_10078cca0(local_90,0);
  uVar9 = 0xf0000000;
  if (iVar5 != 0) goto LAB_1004a4a3f;
  iVar5 = FUN_10078cf30(local_70,local_50 + *(long *)(local_50 + 0x10),uVar6,0);
  uVar9 = 0xf0000000;
  while (iVar5 != -7) {
    if (iVar5 != 0) goto LAB_1004a4a33;
    iVar5 = FUN_10078d0d0(local_70);
    if (iVar5 == 0x200f) {
      iVar5 = FUN_10078d0a0(local_70);
      FUN_10078d0c0(local_70);
      QString::fromUtf16((ushort *)&local_a0,iVar5);
      QString::normalized(&local_98,&local_a0,1,0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a46bd;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1004a46bd:
      local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
      lVar1 = *(long *)(param_1 + 0x18);
      plVar2 = *(long **)(lVar1 + 0x90);
      if (((plVar2 == (long *)0x0) ||
          ((cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_98,&local_a8), cVar4 == '\0' &&
           ((cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_98,&local_a8), cVar4 == '\0' ||
            (*(int *)(local_a8 + 4) == 0)))))) &&
         (cVar4 = FUN_1004a79d0(lVar1,&local_98,&local_a8), cVar4 == '\0')) {
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("SIAHOST","SIAServer",3,
                        "Error: failed to get host path for guest file \"%s\"",
                        local_48 + *(long *)(local_48 + 0x10));
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004a4847;
            }
            QArrayData::deallocate(local_48,1,8);
          }
        }
LAB_1004a4847:
        iVar5 = 10;
        uVar9 = 0xf0000003;
      }
      else {
        uVar7 = QString::utf16();
        iVar5 = FUN_10078cd90(local_90,uVar7,*(int *)(local_a8 + 4) * 2);
        iVar5 = 10 - (uint)(iVar5 == 0);
      }
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a4888;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1004a4888:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a48be;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004a48be:
      if (iVar5 != 9) {
        if (iVar5 == 10) goto LAB_1004a4a33;
        goto LAB_1004a4a3f;
      }
    }
    else if (iVar5 - 0x200aU < 5) {
      uVar7 = FUN_10078cc60(local_70);
      uVar6 = FUN_10078cc70(local_70);
      FUN_10078d0d0(local_70);
      iVar5 = FUN_10078cd90(local_90,uVar7,uVar6);
      if (iVar5 != 0) goto LAB_1004a4a33;
    }
    else if (1 < DAT_1011b55f8) {
      uVar6 = FUN_10078d0d0(local_70);
      FUN_10078d0c0(local_70);
      FUN_1008e3970("SIAHOST","SIAServer",2,"Unsupported data skipped, type = %u, size = %u",uVar6);
    }
    iVar5 = FUN_10078d020(local_70);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  pvVar8 = (void *)FUN_10078cc60(local_90);
  iVar5 = FUN_10078cc70(local_90);
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  lVar3 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar3) = 0x20000;
  *(undefined4 *)(local_40 + lVar3 + 4) = 8;
  *(undefined4 *)(local_40 + lVar3 + 8) = 0;
  *(int *)(local_40 + lVar3 + 0xc) = iVar5 + 0x10;
  _memcpy(local_40 + lVar3 + 0x10,pvVar8,(long)iVar5);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100434830(*(undefined8 *)(lVar1 + 0xf0),0x1896d,local_40 + *(long *)(local_40 + 0x10),
                *(uint *)(local_40 + 4),&DAT_1011ccb98,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a4a30;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1004a4a30:
  uVar9 = 0;
LAB_1004a4a33:
  FUN_10078cf00(local_90);
LAB_1004a4a3f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return uVar9;
}

