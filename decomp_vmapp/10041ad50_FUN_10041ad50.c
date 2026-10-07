
ulong FUN_10041ad50(undefined8 param_1,QByteArray *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined4 local_94;
  char local_81;
  QArrayData *local_80;
  uint *local_78;
  QArrayData *local_70;
  char local_62;
  undefined1 local_61;
  int local_60;
  undefined4 local_5c;
  uint local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  iVar2 = FUN_10041fa10(param_2);
  if (0 < iVar2) {
    QByteArray::trimmed();
    QByteArray::operator=(param_2,(QByteArray *)&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_61 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_61) goto LAB_10041add0;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_10041add0:
    QByteArray::split((char)&local_78);
    if (1 < *local_78) {
      FUN_100050940(&local_78,local_78[1]);
    }
    QByteArray::toLower();
    local_81 = '\0';
    iVar2 = qstrcmp((QByteArray *)&local_80,"printcpu");
    if (iVar2 == 0) {
      uVar6 = local_78[2];
      uVar7 = local_78[3];
      uVar9 = 0;
      if ((int)(uVar7 - uVar6) < 2) {
        local_94 = 0;
      }
      else {
        if (1 < *local_78) {
          FUN_100050940(&local_78,local_78[1]);
          uVar6 = local_78[2];
        }
        local_62 = '\0';
        uVar5 = QByteArray::toInt((bool *)(local_78 + (long)(int)uVar6 * 2 + 6),(int)&local_62);
        local_94 = 0;
        if (local_62 != '\0') {
          local_94 = uVar5;
        }
        uVar6 = local_78[2];
        uVar7 = local_78[3];
      }
      lVar10 = 1;
      iVar2 = 1;
      if (1 < (int)(uVar7 - uVar6)) {
        param_2 = (QByteArray *)&local_78;
        do {
          if (1 < *local_78) {
            FUN_100050940(param_2,local_78[1]);
          }
          iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),"cr");
          if (iVar2 == 0) {
            uVar9 = uVar9 | 1;
          }
          else {
            if (1 < *local_78) {
              FUN_100050940(param_2,local_78[1]);
            }
            iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),"dr");
            if (iVar2 == 0) {
              uVar9 = uVar9 | 2;
            }
            else {
              if (1 < *local_78) {
                FUN_100050940(param_2,local_78[1]);
              }
              iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),"msr");
              if (iVar2 == 0) {
                uVar9 = uVar9 | 4;
              }
              else {
                if (1 < *local_78) {
                  FUN_100050940(param_2,local_78[1]);
                }
                iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),
                                "instr");
                if (iVar2 == 0) {
                  uVar9 = uVar9 | 8;
                }
                else {
                  if (1 < *local_78) {
                    FUN_100050940(param_2,local_78[1]);
                  }
                  iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),
                                  "seg");
                  if (iVar2 == 0) {
                    uVar9 = uVar9 | 0x10;
                  }
                  else {
                    if (1 < *local_78) {
                      FUN_100050940(param_2,local_78[1]);
                    }
                    iVar2 = qstrcmp((QByteArray *)(local_78 + ((int)local_78[2] + lVar10) * 2 + 4),
                                    "idt");
                    if (iVar2 == 0) {
                      uVar9 = uVar9 | 0x20;
                    }
                  }
                }
              }
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (long)(int)local_78[3] - (long)(int)local_78[2]);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        iVar2 = 1;
      }
LAB_10041b45a:
      local_60 = iVar2;
      local_54 = 0;
      local_5c = local_94;
      local_58 = uVar9;
      if (local_60 == 9) {
        iVar3 = -1;
      }
      else {
        uVar6 = FUN_10041b790(param_1,&local_60);
        param_2 = (QByteArray *)(ulong)uVar6;
        iVar3 = 0;
      }
    }
    else {
      iVar3 = qstrcmp((QByteArray *)&local_80,"reattach");
      local_94 = 0;
      iVar2 = 3;
      if (iVar3 == 0) goto LAB_10041b457;
      iVar2 = qstrcmp((QByteArray *)&local_80,"ed");
      if ((((iVar2 == 0) || (iVar2 = qstrcmp((QByteArray *)&local_80,"eq"), iVar2 == 0)) ||
          (iVar2 = qstrcmp((QByteArray *)&local_80,"eb"), iVar2 == 0)) ||
         (iVar2 = qstrcmp((QByteArray *)&local_80,"ew"), iVar2 == 0)) {
        uVar6 = local_78[2];
        iVar3 = 4;
        if (local_78[3] - uVar6 == 3) {
          if (1 < *local_78) {
            FUN_100050940(&local_78,local_78[1]);
            uVar6 = local_78[2];
          }
          local_4c = QByteArray::toULongLong
                               ((bool *)(local_78 + (long)(int)uVar6 * 2 + 6),(int)&local_81);
          if (local_81 != '\0') {
            iVar2 = qstrcmp((QByteArray *)&local_80,"ed");
            if (iVar2 == 0) {
              local_3c = 4;
              if (1 < *local_78) {
                FUN_100050940(&local_78,local_78[1]);
              }
              uVar5 = QByteArray::toULong((bool *)(local_78 + (long)(int)local_78[2] * 2 + 8),
                                          (int)&local_81);
              local_44 = CONCAT44(local_44._4_4_,uVar5);
            }
            else {
              iVar2 = qstrcmp((QByteArray *)&local_80,"eq");
              if (iVar2 != 0) {
                iVar2 = qstrcmp((QByteArray *)&local_80,"eb");
                if (iVar2 == 0) {
                  if (1 < *local_78) {
                    FUN_100050940(&local_78,local_78[1]);
                  }
                  uVar6 = QByteArray::toUInt((bool *)(local_78 + (long)(int)local_78[2] * 2 + 8),
                                             (int)&local_81);
                  if ((0xff < uVar6) || (local_81 == '\0')) goto LAB_10041b48f;
                  local_3c = 1;
                  local_44 = CONCAT71(local_44._1_7_,(char)uVar6);
                  iVar2 = 6;
                }
                else {
                  iVar4 = qstrcmp((QByteArray *)&local_80,"ew");
                  iVar2 = 6;
                  if (iVar4 == 0) {
                    local_3c = 2;
                    if (1 < *local_78) {
                      FUN_100050940(&local_78,local_78[1]);
                    }
                    uVar1 = QByteArray::toUShort
                                      ((bool *)(local_78 + (long)(int)local_78[2] * 2 + 8),
                                       (int)&local_81);
                    local_44 = CONCAT62(local_44._2_6_,uVar1);
                    goto joined_r0x00010041b148;
                  }
                }
LAB_10041b457:
                uVar9 = 0;
                local_94 = 0;
                goto LAB_10041b45a;
              }
              local_3c = 8;
              if (1 < *local_78) {
                FUN_100050940(&local_78,local_78[1]);
              }
              local_44 = QByteArray::toULongLong
                                   ((bool *)(local_78 + (long)(int)local_78[2] * 2 + 8),
                                    (int)&local_81);
            }
joined_r0x00010041b148:
            uVar9 = 0;
            iVar2 = 6;
            if (local_81 != '\0') goto LAB_10041b45a;
          }
        }
      }
      else {
        iVar2 = qstrcmp((QByteArray *)&local_80,"dd");
        if (((iVar2 != 0) && (iVar2 = qstrcmp((QByteArray *)&local_80,"dq"), iVar2 != 0)) &&
           (iVar2 = qstrcmp((QByteArray *)&local_80,"db"), iVar2 != 0)) {
          iVar3 = qstrcmp((QByteArray *)&local_80,"dw");
          iVar2 = 9;
          if (iVar3 != 0) goto LAB_10041b457;
        }
        uVar6 = local_78[2];
        iVar3 = 4;
        if (local_78[3] - uVar6 == 2) {
          local_3c = 0;
          if (1 < *local_78) {
            FUN_100050940(&local_78,local_78[1]);
            uVar6 = local_78[2];
          }
          local_4c = QByteArray::toULongLong
                               ((bool *)(local_78 + (long)(int)uVar6 * 2 + 6),(int)&local_81);
          if (local_81 != '\0') {
            iVar2 = qstrcmp((QByteArray *)&local_80,"dq");
            if (iVar2 == 0) {
              local_3c = 8;
              iVar2 = 7;
            }
            else {
              iVar2 = qstrcmp((QByteArray *)&local_80,"dd");
              if (iVar2 == 0) {
                local_3c = 4;
                iVar2 = 7;
              }
              else {
                iVar2 = qstrcmp((QByteArray *)&local_80,"dw");
                if (iVar2 == 0) {
                  local_3c = 2;
                  iVar2 = 7;
                }
                else {
                  iVar3 = qstrcmp((QByteArray *)&local_80,"db");
                  iVar2 = 7;
                  if (iVar3 == 0) {
                    local_3c = 1;
                  }
                }
              }
            }
            goto LAB_10041b457;
          }
        }
      }
    }
LAB_10041b48f:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_61 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_61) goto LAB_10041b4bf;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_10041b4bf:
    FUN_1000506b0(&local_78);
    if (iVar3 == 0) goto LAB_10041b4cf;
  }
  param_2 = (QByteArray *)0x0;
LAB_10041b4cf:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)param_2 & 0xffffffff;
}

