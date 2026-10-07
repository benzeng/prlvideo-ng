
undefined1 FUN_1006605f0(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int local_6c;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_28 [15];
  undefined1 local_19;
  
  FUN_100787f50(local_28,param_2,0);
  cVar2 = FUN_1007880a0(local_28);
  puVar1 = PTR_shared_null_100ba20d0;
  if (cVar2 == '\0') {
    uVar5 = 0;
    FUN_1008e3970("","pvsHostInfo",0,"Error creating Device properties");
    goto LAB_100660a63;
  }
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1007881a0(local_28,&cf_device_type,&local_30);
  if (cVar2 == '\0') {
    uVar5 = 0;
    FUN_1008e3970("","pvsHostInfo",0,"Wrong or absent \'device-type\' property");
  }
  else {
    iVar3 = QString::compare_helper
                      (local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),"Generic"
                       ,0xffffffff,1);
    if (iVar3 == 0) {
      FUN_1006610d0(param_1,local_28);
      FUN_100788010(local_40,local_28,&cf_DeviceCharacteristics);
      cVar2 = FUN_1007880a0(local_40);
      if (cVar2 == '\0') {
        uVar5 = 0;
        FUN_1008e3970("","pvsHostInfo",0,"Error creating HDD characteristics");
      }
      else {
        local_48 = (QArrayData *)puVar1;
        local_50 = (QArrayData *)puVar1;
        cVar2 = FUN_1007880e0(local_40,&cf_VendorName);
        if ((cVar2 != '\0') &&
           (cVar2 = FUN_1007881a0(local_40,&cf_VendorName,&local_50), cVar2 != '\0')) {
          local_60 = (QArrayData *)QString::fromAscii_helper("%1 ",3);
          QString::arg(&local_58,&local_60,&local_50,0,0x20);
          QString::append(param_1);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_19 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1006607da;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1006607da:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_19 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_10066080a;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
LAB_10066080a:
        cVar2 = FUN_1007881a0(local_40,&cf_ProductName,&local_48);
        if (cVar2 == '\0') {
          uVar5 = 0;
          FUN_1008e3970("","pvsHostInfo",0,"No \'Product Name\' property");
        }
        else {
          QString::append(param_1);
          QString::trimmed();
          QString::operator=(param_1,&local_68);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_19 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_10066087a;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_10066087a:
          if (*(int *)(param_1->field0_0x0 + 4) == 0) {
            uVar5 = 0;
            FUN_1008e3970("","pvsHostInfo",0,"Can\'t build disk name");
          }
          else {
            uVar4 = FUN_1006612d0();
            *(undefined4 *)&param_1[2].field0_0x0 = uVar4;
            local_6c = 0;
            cVar2 = FUN_1007880e0(local_40,&cf_LogicalBlockSize);
            if (cVar2 == '\0') {
              cVar2 = FUN_1007880e0(local_28,&cf_LogicalBlockSize);
              if ((cVar2 == '\0') ||
                 (cVar2 = FUN_1007882f0(local_28,&cf_LogicalBlockSize,&local_6c), cVar2 != '\0'))
              goto LAB_1006609c0;
              uVar5 = 0;
              FUN_1008e3970("","pvsHostInfo",0,"Can\'t get sector size property");
            }
            else {
              cVar2 = FUN_1007882f0(local_40,&cf_LogicalBlockSize,&local_6c);
              if (cVar2 == '\0') {
                uVar5 = 0;
                FUN_1008e3970("","pvsHostInfo",0,"Can\'t get sector size from characteristics");
              }
              else {
LAB_1006609c0:
                param_1[4].field0_0x0 = (QTypedArrayData<unsigned_short> *)(long)local_6c;
                uVar5 = 1;
              }
            }
          }
        }
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_19 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1006609fa;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1006609fa:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_19 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100660a2a;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_100660a2a:
      FUN_1007880b0(local_40);
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","pvsHostInfo",0,"Wrong \'device-type\' property value \'%s\'",
                    local_38 + *(long *)(local_38 + 0x10));
      if (*(int *)local_38 == -1) {
        uVar5 = 0;
      }
      else {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_19 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_19) {
            uVar5 = 0;
            goto LAB_100660a33;
          }
        }
        QArrayData::deallocate(local_38,1,8);
        uVar5 = 0;
      }
    }
  }
LAB_100660a33:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100660a63;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100660a63:
  FUN_1007880b0(local_28);
  return uVar5;
}

