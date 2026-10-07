
void FUN_1005ad8a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar4 = param_2 % 0x10;
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"GroupBitmap: bit count = %u",*param_1);
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"GroupBitmap: size = %u bytes",param_1[1]);
  }
  if (*(long *)(param_1 + 2) == 0) {
    if (iVar4 <= DAT_1011b55f8 || iVar4 < 1) {
      FUN_1008e3970("","vdisk",param_2,"GroupBitmap: bit data not allocated");
      return;
    }
  }
  else {
    if (iVar4 <= DAT_1011b55f8 || iVar4 < 1) {
      FUN_1008e3970("","vdisk",param_2,"GroupBitmap: bit data {");
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        iVar1 = 0;
        if (uVar5 < uVar2) {
          do {
            iVar3 = iVar1;
            local_50 = (QArrayData *)QString::fromAscii_helper("0x%1 ",5);
            QString::arg(&local_48,&local_50,
                         *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)(uVar5 + iVar3)),2,0x10,
                         0x30);
            QString::append(&local_40);
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005ada2e;
              }
              QArrayData::deallocate(local_48,2,8);
            }
LAB_1005ada2e:
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005ada5e;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1005ada5e:
            iVar1 = iVar3 + 1;
          } while ((iVar1 < 8) && (uVar5 + iVar1 < (uint)param_1[1]));
          uVar5 = uVar5 + 1 + iVar3;
        }
        if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
          QString::toUtf8();
          FUN_1008e3970("","vdisk",param_2,"GroupBitmap: %s",local_58 + *(long *)(local_58 + 0x10));
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005adb00;
            }
            QArrayData::deallocate(local_58,1,8);
          }
        }
LAB_1005adb00:
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005adb30;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_1005adb30:
        uVar5 = uVar5 + 1;
        uVar2 = param_1[1];
      } while (uVar5 < uVar2);
    }
    if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
      FUN_1008e3970("","vdisk",param_2,"GroupBitmap: }");
    }
  }
  return;
}

