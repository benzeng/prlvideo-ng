
/* WARNING: Removing unreachable block (ram,0x000100aab90d) */

undefined1 FUN_100aab5e0(long *param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100aabc20(&local_40);
  iVar2 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"DH",
                     0xffffffff,1);
  if ((iVar2 != 0) &&
     (iVar2 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"RSA",
                         0xffffffff,1), iVar2 != 0)) {
    uVar7 = 0;
    goto LAB_100aabab9;
  }
  iVar2 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"RSA",
                     0xffffffff,1);
  uVar7 = 1;
  if ((iVar2 != 0) || (param_3 != '\0')) goto LAB_100aabab9;
  FUN_100df99c0("","IOCommunication",0,"Perfoming post connection check \n");
  QByteArray::QByteArray((QByteArray *)&local_48,0x100,'\0');
  QByteArray::QByteArray((QByteArray *)&local_50,0x100,'\0');
  lVar4 = FUN_100be3fc0(param_2);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_102281880;
  plVar5[3] = (long)FUN_100c7cd70;
  if (lVar4 == 0) {
    FUN_100df99c0("","IOCommunication",0,"Unable to get peer certifiate\n");
    uVar7 = 0;
  }
  else if (*param_1 == 0) {
    uVar7 = 0;
    FUN_100df99c0("","IOCommunication",0,"Unable to get local certificate\n");
  }
  else {
    lVar4 = FUN_100c92690(lVar4);
    lVar6 = FUN_100c92690(*param_1);
    if ((lVar4 == 0) || (lVar6 == 0)) {
      uVar7 = 0;
      FUN_100df99c0("","IOCommunication",0,
                    "Post connection check failed: missing subject attributes \n");
    }
    else {
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      FUN_100c92ad0(lVar4,local_48 + *(long *)(local_48 + 0x10),*(uint *)(local_48 + 4));
      if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
      }
      FUN_100c92ad0(lVar6,local_50 + *(long *)(local_50 + 0x10),*(uint *)(local_50 + 4));
      if ((2 < DAT_10230ffd0) &&
         (FUN_100df99c0("","IOCommunication",3,"Peer Certificate: %s\n",
                        local_48 + *(long *)(local_48 + 0x10)), 2 < DAT_10230ffd0)) {
        FUN_100df99c0("","IOCommunication",3,"Local certificate: %s\n",
                      local_50 + *(long *)(local_50 + 0x10));
      }
      iVar2 = FUN_100c96de0(lVar6,0xd,0xffffffff);
      iVar3 = FUN_100c96de0(lVar4,0xd,0xffffffff);
      if ((iVar2 == -1) || (iVar3 == -1)) {
        if (DAT_10230ffd0 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          FUN_100df99c0("","IOCommunication",2,"Post connection check failed: missing attributes");
        }
      }
      else {
        lVar6 = FUN_100c96d80(lVar6,iVar2);
        lVar4 = FUN_100c96d80(lVar4,iVar3);
        if ((lVar6 == 0) || (lVar4 == 0)) {
          if (DAT_10230ffd0 < 2) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            FUN_100df99c0("","IOCommunication",2,"Post connection check failed: missing attributes")
            ;
          }
        }
        else {
          lVar6 = FUN_100c96d60(lVar6);
          lVar4 = FUN_100c96d60(lVar4);
          if ((lVar6 == 0) || (lVar4 == 0)) {
            if (DAT_10230ffd0 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              FUN_100df99c0("","IOCommunication",2,
                            "Post connection check failed: Non valid certificate");
            }
          }
          else {
            iVar2 = FUN_100c8b430(lVar6,lVar4);
            if (iVar2 == 0) {
              uVar7 = 1;
            }
            else if (DAT_10230ffd0 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              FUN_100df99c0("","IOCommunication",2,
                            "Post connection check failed: Subject names mistmatching");
            }
          }
        }
      }
    }
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aaba89;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100aaba89:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aabab9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100aabab9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar7;
      }
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar7;
}

