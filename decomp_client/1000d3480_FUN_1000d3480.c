
void FUN_1000d3480(long *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  QArrayData *local_58;
  undefined1 local_50 [39];
  undefined1 local_29;
  
  QMutex::lock();
  if ((*(int *)((long)param_1 + 0x21c) == param_2[1]) && ((int)param_1[0x43] == *param_2)) {
    cVar2 = FUN_1000bd150(param_1);
    if (cVar2 == '\0') {
      MacUtils::unhideAppWindows();
    }
  }
  else {
    iVar3 = FUN_1000cf550(param_1,param_2);
    if (iVar3 < 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",1,
                      "Warning: app associated with helper with psn={%u, %u} not running",*param_2,
                      param_2[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],0x13ec);
        }
      }
      FUN_1000c6a60(param_1,param_2);
    }
    else {
      iVar4 = FUN_1000dfea0(param_1);
      if (iVar4 == 0) {
        puVar5 = (uint *)param_1[0xb];
        if (1 < *puVar5) {
          FUN_1000e6e10(param_1 + 0xb,puVar5[1]);
          puVar5 = (uint *)param_1[0xb];
        }
        lVar1 = *(long *)(puVar5 + ((long)iVar3 + (long)(int)puVar5[2]) * 2 + 4);
        iVar3 = FUN_100a67f70(local_50,0x24);
        if (iVar3 == 0) {
          *(undefined1 *)(lVar1 + 0x60) = 0;
          FUN_1000bd6c0(&local_58,lVar1 + 0x58);
          if (0 < *(int *)(local_58 + 4)) {
            iVar3 = FUN_100a68060(local_50,local_58 + *(long *)(local_58 + 0x10),
                                  *(int *)(local_58 + 4) << 3,0x200f);
            if (iVar3 == 0) {
              puVar6 = (undefined8 *)FUN_100a67f30(local_50);
              puVar6[3] = 0;
              puVar6[2] = 0;
              puVar6[1] = 0;
              *puVar6 = 0;
              *(undefined4 *)(puVar6 + 4) = 0x24;
              *(undefined4 *)puVar6 = 0x8a;
              iVar3 = FUN_100a67f40(local_50);
              *(int *)(puVar6 + 2) = iVar3 + -0x14;
              *(undefined4 *)(puVar6 + 1) = 0;
              *(undefined4 *)((long)puVar6 + 0xc) = 0;
              *(undefined4 *)((long)puVar6 + 4) = 2;
              uVar7 = (**(code **)(*param_1 + 0x68))(param_1);
              FUN_1000e85b0(uVar7,puVar6);
            }
          }
          FUN_100a681d0(local_50);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_29 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1000d372d;
            }
            QArrayData::deallocate(local_58,8,8);
          }
        }
      }
      else if (iVar4 == -2) {
        FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                      *param_2,param_2[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],0x13f9);
        }
        FUN_1000c6a60(param_1,param_2);
      }
    }
  }
LAB_1000d372d:
  QMutex::unlock();
  return;
}

