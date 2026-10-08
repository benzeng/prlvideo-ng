
int FUN_100d4f110(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int local_64;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined *local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  lVar4 = FUN_100ddbb40();
  uVar2 = FUN_100ddbac0();
  uVar5 = (ulong)uVar2 * param_4 + lVar4;
  local_64 = (int)uVar5;
  do {
    puVar1 = PTR_shared_null_1021e15e8;
    _usleep(500000);
    local_40 = puVar1;
    FUN_1000341d0(&local_40,param_2);
    FUN_1001d3590(&local_40);
    local_48 = (QArrayData *)QString::fromAscii_helper("",0);
    local_50 = (QArrayData *)QString::fromAscii_helper("",0);
    iVar3 = FUN_100d432b0(param_1,&local_40,&local_38,&local_48,&local_50);
    if (2 < DAT_10230ffd0) {
      uVar6 = FUN_100dddcf0(iVar3);
      FUN_100df99c0("","PrlSdkUtils",3,"PrlSdk::ExecInGuest RC = %.8X [%s]",iVar3,uVar6);
    }
    if (iVar3 == -0x7ffcbfff) {
      uVar7 = FUN_100ddbb40();
      iVar8 = 3;
      iVar3 = local_64;
      if (uVar5 < uVar7) {
        FUN_100df99c0("","PrlSdkUtils",0,"Timeout of wait start guest tools, please look at screen")
        ;
        iVar8 = 1;
        local_64 = -0x7ffcbfff;
        iVar3 = local_64;
      }
    }
    else {
      iVar8 = 1;
      if (-1 < iVar3) {
        FUN_100df99c0("","PrlSdkUtils",0,"reconfiguration return %d",local_38);
        iVar8 = 2;
        iVar3 = local_64;
        if (local_38 != 0) {
          local_64 = -0x7ffffff7;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to configure");
          iVar8 = 1;
          iVar3 = local_64;
        }
      }
    }
    local_64 = iVar3;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4f2f0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100d4f2f0:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4f320;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100d4f320:
    FUN_100039a80(&local_40);
    iVar3 = 0;
    if (((iVar8 == 2) || (iVar3 = local_64, iVar8 != 3)) || (iVar3 = 0, local_38 != 0)) {
      return iVar3;
    }
  } while( true );
}

