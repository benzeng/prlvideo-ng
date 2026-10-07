
void FUN_1000bf950(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((param_2 & 2) == 0) {
LAB_1000bfa39:
    if ((param_2 & 8) != 0) {
      FUN_1000d8680(param_1);
    }
    if (((param_2 & 1) == 0) || (iVar4 = FUN_1000bf840(param_1), -1 < iVar4)) {
      if (((param_2 & 0x10) != 0) && (cVar3 = FUN_100094390(param_1), cVar3 != '\0')) {
        FUN_1000e9fd0(&local_40,0xc);
        iVar4 = 4;
        if (*(int *)(local_40 + 4) != 0) {
          iVar5 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0xd0000,
                                local_40 + *(long *)(local_40 + 0x10));
          iVar4 = 0;
          if (iVar5 == -1) {
            iVar4 = 5;
            FUN_1008e3970("","vm",0,"Failed to load network boot bios.");
          }
        }
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_29 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bfb09;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_1000bfb09:
        if (iVar4 == 4) goto LAB_1000bfe50;
        if (iVar4 == 5) goto LAB_1000bfea9;
      }
      if ((param_2 & 0x40) == 0) {
LAB_1000bfc3b:
        if ((param_2 & 0x20) == 0) {
          return;
        }
        if ((*(uint *)(param_1 + 0x5c0) & 0xffffff00) != 0x700) {
          return;
        }
        FUN_1000e9fd0(&local_58,0xd);
        iVar4 = 4;
        if (*(int *)(local_58 + 4) != 0) {
          iVar5 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0x20200,
                                local_58 + *(long *)(local_58 + 0x10));
          if (iVar5 == -1) {
            iVar4 = 5;
            FUN_1008e3970("","vm",0,"Failed to load mac boot bios.");
          }
          else {
            FUN_1000e9fd0(&local_60,0xe);
            QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_60);
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_29 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1000bfce9;
              }
              QArrayData::deallocate(local_60,1,8);
            }
LAB_1000bfce9:
            if (*(int *)(local_58 + 4) != 0) {
              local_4c = *(int *)(local_58 + 4);
              iVar4 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0x1a080000,&local_4c,4);
              if (iVar4 == -1) {
                iVar4 = 5;
                FUN_1008e3970("","vm",0,"Failed to load mac drivers.");
              }
              else {
                iVar5 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0x1a081000,
                                      local_58 + *(long *)(local_58 + 0x10),
                                      (long)*(int *)(local_58 + 4));
                iVar4 = 0;
                if (iVar5 == -1) {
                  iVar4 = 5;
                  FUN_1008e3970("","vm",0,"Failed to load mac drivers.");
                }
              }
            }
          }
        }
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bfe4b;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1000bfe4b:
        if (iVar4 != 4) {
          if (iVar4 != 5) {
            return;
          }
          goto LAB_1000bfea9;
        }
      }
      else {
        iVar4 = FUN_1007da300("vm.efi.debug",0);
        uVar7 = 7;
        if (*(int *)(param_1 + 0xb60) != 0) {
          if (iVar4 == 0) {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vm",2,"Using EFI64");
            }
          }
          else {
            FUN_1008e3970("","vm",0,"Using debug EFI64");
            uVar7 = 8;
          }
        }
        FUN_1000e9fd0(&local_48,uVar7);
        uVar1 = *(uint *)(param_1 + 0xb68);
        uVar2 = *(uint *)(local_48 + 4);
        if ((((uVar2 != 0) && ((uVar2 & 0xfff) == 0)) && (uVar2 < 0x700001)) &&
           (uVar2 + 0x800000 <= uVar1)) {
          FUN_10008dd00(*(undefined8 *)(param_1 + 0x1940),
                        (uVar1 - uVar2) + *(int *)(param_1 + 0xb6c),
                        local_48 + *(long *)(local_48 + 0x10),uVar2);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_29 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1000bfc3b;
            }
            QArrayData::deallocate(local_48,1,8);
          }
          goto LAB_1000bfc3b;
        }
        FUN_1008e3970("","vm",0,
                      "Size of EfiBios 0x%x is invalid! EfiAreaMaxSize 0x%x; FwVolSize 0x%x",uVar2,
                      uVar1,0x800000);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_29 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bfe50;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_1000bfe50:
      FUN_1008e3970("","vm",0,"BIOSes load phase failed!");
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000403,&local_98);
      puVar6 = &local_98;
      goto LAB_1000bfef2;
    }
  }
  else {
    FUN_1000e9fd0(&local_38,5);
    cVar3 = '\x04';
    if (*(uint *)(local_38 + 4) == 0x10000) {
      if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
        QByteArray::reallocData(&local_38,0x10001,*(uint *)(local_38 + 8) >> 0x1f);
      }
      FUN_1000bf0a0(param_1,local_38 + *(long *)(local_38 + 0x10),param_2);
      iVar4 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0xf0000,
                            local_38 + *(long *)(local_38 + 0x10),(long)(int)*(uint *)(local_38 + 4)
                           );
      cVar3 = (iVar4 == -1) * '\x05';
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000bfa27;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1000bfa27:
    if (cVar3 == '\x04') goto LAB_1000bfe50;
    if (cVar3 != '\x05') goto LAB_1000bfa39;
  }
LAB_1000bfea9:
  FUN_1008e3970("","vm",0,"BIOSes initialization phase failed!");
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_100408ff0(param_1 + 0x10b0,0x80000193,&local_78);
  puVar6 = &local_78;
LAB_1000bfef2:
  FUN_10002d9d0(puVar6);
  return;
}

