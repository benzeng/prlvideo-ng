
undefined8 FUN_100285320(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  undefined1 local_34 [4];
  
  iVar3 = FUN_1000ec2a0();
  if (iVar3 == 0) {
    pcVar4 = "LSI: Can\'t start SARE subsystem read!";
  }
  else {
    local_38 = 0;
    iVar3 = FUN_1000ec3b0(&local_38,4,local_34,0);
    if (iVar3 == 0) {
      pcVar4 = "LSI: Can\'t read data from SARE subsystem!";
    }
    else {
      local_38 = local_38 - 1;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",3,"SARE: Load count = %d");
      }
      iVar3 = FUN_100284ef0();
      if (iVar3 == 0) {
        uVar6 = 0;
        local_38 = local_38 - 6;
        if (local_38 != 0) {
          uVar6 = 0;
          do {
            iVar3 = FUN_1000ec3b0(&local_48,0x10,local_34,0);
            if (iVar3 == 0) {
              FUN_1008e3970("","LocalDevices",0,"LSI: Can\'t read hdr data!(%u)",local_38 >> 1);
              uVar6 = 1;
              break;
            }
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","LocalDevices",3,"SARE: dev: %u t: %u sz: %u",local_48,local_44,
                            local_40);
            }
            FUN_100285620(&local_50,local_48);
            plVar2 = local_50;
            lVar5 = *(long *)(local_50[2] + 8);
            if (lVar5 == 0) {
              FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","dev",
                            "../Scsi/Lsi/dev.cpp",0x11c,"SaReLoad");
              lVar5 = *(long *)(plVar2[2] + 8);
              if (lVar5 != 0) goto LAB_1002854e0;
              LOCK();
              plVar1 = plVar2 + 1;
              iVar3 = (int)*plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
LAB_100285592:
              uVar6 = 1;
              if (iVar3 == 1) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
              break;
            }
LAB_1002854e0:
            iVar3 = FUN_1002856d0(lVar5,&local_48);
            if (iVar3 != 0) {
              FUN_1008e3970("","LocalDevices",0,"LSI: Can\'t read dev data!(%u)",local_48);
              uVar6 = 1;
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar1 = plVar2 + 1;
                iVar3 = (int)*plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                goto LAB_100285592;
              }
              break;
            }
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            local_38 = local_38 >> 1;
          } while (local_38 != 0);
        }
      }
      else {
        FUN_1008e3970("","LocalDevices",0,"LSI: Can\'t read ioc data!");
        uVar6 = 1;
      }
      iVar3 = FUN_1000ec640();
      if (iVar3 != 0) {
        return uVar6;
      }
      pcVar4 = "LSI: Can\'t stop SARE subsystem read!";
    }
  }
  FUN_1008e3970("","LocalDevices",0,pcVar4);
  return 1;
}

