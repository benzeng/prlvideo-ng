
undefined4 FUN_1003f4260(long param_1,QString *param_2,uint *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  char *pcVar11;
  QArrayData *pQVar12;
  undefined4 uVar13;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  *param_3 = 0;
  local_48 = &cf_IOUserClientClass;
  local_50 = &cf_IOHDIXHDDriveOutKernelUserClient;
  FUN_1006821f0(&local_40,&local_48,&local_50);
  if (((local_40 != 0) &&
      (iVar4 = _IOServiceGetMatchingServices
                         (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,local_40,&local_38),
      iVar4 == 0)) && (iVar4 = _IOIteratorNext(local_38), iVar4 != 0)) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    uVar13 = 0xffffffff;
    while (lVar6 = _IORegistryEntrySearchCFProperty(iVar4,"IOService",&cf_image_path,uVar1,1),
          lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFDataGetTypeID();
      if (lVar7 != lVar8) {
        pcVar11 = "[DVDRom] Wrong data type";
        goto LAB_1003f45ec;
      }
      iVar5 = _CFDataGetLength(lVar6);
      pvVar9 = _malloc((long)iVar5);
      if (pvVar9 == (void *)0x0) {
        FUN_1008e3970("","DVDImage",0,"[DVDRom] %s Can not allocate memory!","MacSpecOpen");
        return 0xffffffff;
      }
      pvVar10 = (void *)_CFDataGetBytePtr(lVar6);
      _memcpy(pvVar9,pvVar10,(long)iVar5);
      QByteArray::fromRawData((char *)&local_60,(int)pvVar9);
      lVar6 = 0;
      pQVar12 = local_60 + *(long *)(local_60 + 0x10);
      if ((pQVar12 != (QArrayData *)0x0) && (*(uint *)(local_60 + 4) != 0)) {
        lVar6 = 0;
        do {
          if (pQVar12[lVar6] == (QArrayData)0x0) break;
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < *(uint *)(local_60 + 4));
      }
      local_58.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar12,(int)lVar6);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f4434;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1003f4434:
      _free(pvVar9);
      cVar3 = operator==(&local_58,param_2);
      bVar2 = true;
      if (cVar3 != '\0') {
        lVar6 = _IORegistryEntrySearchCFProperty(iVar4,"IOService",&cf_BSDName,uVar1,1);
        FUN_100788b70(&local_68,lVar6);
        if (*(int *)(local_68 + 4) != 0) {
          iVar4 = FUN_100785e20(&local_68);
          *param_3 = (uint)(iVar4 == 0);
          QString::fromUtf8_helper((char *)&local_70,0xadd90e);
          QString::append(&local_70);
          QString::operator=((QString *)(param_1 + 0x120),&local_70);
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_31 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003f450b;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_1003f450b:
          uVar13 = 0;
          (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                    (*(long **)(param_1 + 0x30),(QString *)(param_1 + 0x120),1,1,0,0x100);
        }
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f4576;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1003f4576:
        bVar2 = false;
      }
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f45a8;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1003f45a8:
      if (!bVar2) {
        return uVar13;
      }
      iVar4 = _IOIteratorNext(local_38);
      if (iVar4 == 0) {
        return uVar13;
      }
    }
    pcVar11 = "[DVDRom] Can not get remote path";
LAB_1003f45ec:
    FUN_1008e3970("","DVDImage",0,pcVar11);
  }
  return 0xffffffff;
}

