
void FUN_100093020(long param_1,int param_2,long *param_3,undefined8 param_4,char param_5)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  QString *pQVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  QArrayData *local_1a10;
  QArrayData *local_1a08;
  QArrayData *local_1a00;
  undefined8 local_19f8;
  QArrayData *local_19f0;
  QArrayData *local_19e8;
  undefined8 local_19e0;
  QArrayData *local_19d8;
  QArrayData *local_19d0;
  undefined8 local_19c8;
  QArrayData *local_19c0;
  QArrayData *local_19b8;
  undefined8 local_19b0;
  QArrayData *local_19a8;
  QArrayData *local_19a0;
  QArrayData *local_1998;
  undefined8 local_1990;
  QArrayData *local_1988;
  QArrayData *local_1980;
  undefined8 local_1978;
  QArrayData *local_1970;
  QArrayData *local_1968;
  undefined8 local_1960;
  QArrayData *local_1958;
  char local_1949;
  QArrayData *local_1948;
  QFileInfo local_1940 [8];
  QTypedArrayData<unsigned_short> *local_1938;
  QArrayData *local_1930;
  QTypedArrayData<unsigned_short> *local_1928;
  QTypedArrayData<unsigned_short> *local_1920;
  QArrayData *local_1918;
  undefined8 local_1910;
  QTypedArrayData<unsigned_short> *local_1908;
  QArrayData *local_1900;
  undefined8 local_18f8;
  QTypedArrayData<unsigned_short> *local_18f0;
  QArrayData *local_18e8;
  undefined8 local_18e0;
  undefined1 local_18d8 [24];
  QArrayData **local_18c0;
  undefined4 local_18b0;
  undefined1 local_10a0 [24];
  QArrayData **local_1088;
  undefined4 local_1078;
  undefined1 local_868 [24];
  QArrayData **local_850;
  undefined4 local_840;
  bool local_29;
  
  if (param_2 == 0) {
    if (param_5 == '\0') {
      uVar6 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
      FUN_10018c2b0(uVar6);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      iVar5 = CVmCommonOptions::getOsType();
      puVar7 = (uint *)*param_3;
      uVar8 = *puVar7;
      if (iVar5 == 8) {
        if (1 < uVar8) {
          FUN_10003cb70(param_3,puVar7[1]);
          puVar7 = (uint *)*param_3;
          uVar8 = *puVar7;
        }
        pQVar9 = *(QString **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
        if (*(int *)&pQVar9[2].field0_0x0 != 0) {
          if (1 < uVar8) {
            FUN_10003cb70(param_3,puVar7[1]);
            pQVar9 = *(QString **)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
          }
          QFileInfo::QFileInfo(local_1940,pQVar9);
          cVar4 = QFileInfo::isWritable();
          if ((cVar4 == '\0') || (cVar4 = QFileInfo::isHidden(), cVar4 != '\0')) {
            local_1948 = (QArrayData *)QString::fromAscii_helper("",0);
            FUN_100099d90(local_18d8,5,param_4,0xffffffff);
            local_18c0 = &local_1948;
            local_18b0 = 0;
            FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_18d8);
            *(undefined1 *)(param_1 + 0x28) = 0;
            if (*(int *)local_1948 != -1) {
              if (*(int *)local_1948 != 0) {
                LOCK();
                *(int *)local_1948 = *(int *)local_1948 + -1;
                local_29 = *(int *)local_1948 != 0;
                UNLOCK();
                if (local_29) goto LAB_10009331a;
              }
              QArrayData::deallocate(local_1948,2,8);
            }
            goto LAB_10009331a;
          }
          uVar6 = FUN_100319c30(*(undefined8 *)(param_1 + 0x20));
          puVar7 = (uint *)*param_3;
          if (1 < *puVar7) {
            FUN_10003cb70(param_3,puVar7[1]);
            puVar7 = (uint *)*param_3;
          }
          local_1958 = (QArrayData *)**(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
          if (1 < *(int *)local_1958 + 1U) {
            LOCK();
            *(int *)local_1958 = *(int *)local_1958 + 1;
            local_29 = *(int *)local_1958 != 0;
            UNLOCK();
          }
          FUN_10032fe90(uVar6,&local_1958,&local_1949);
          if (*(int *)local_1958 != -1) {
            if (*(int *)local_1958 != 0) {
              LOCK();
              *(int *)local_1958 = *(int *)local_1958 + -1;
              local_29 = *(int *)local_1958 != 0;
              UNLOCK();
              if (local_29) goto LAB_100093565;
            }
            QArrayData::deallocate(local_1958,2,8);
          }
LAB_100093565:
          if (local_1949 == '\0') {
            cVar4 = FUN_100090550(param_1,1);
            if (cVar4 == '\0') {
              iVar5 = FUN_1000905c0(param_1);
              if (iVar5 != 1) {
                if (iVar5 != 0) {
                  local_19a8 = (QArrayData *)QString::fromAscii_helper("",0);
                  FUN_100099d90(local_10a0,5,param_4,0xffffffff);
                  local_1088 = &local_19a8;
                  local_1078 = 0;
                  FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_10a0);
                  *(undefined1 *)(param_1 + 0x28) = 0;
                  if (*(int *)local_19a8 != -1) {
                    if (*(int *)local_19a8 != 0) {
                      LOCK();
                      *(int *)local_19a8 = *(int *)local_19a8 + -1;
                      local_29 = *(int *)local_19a8 != 0;
                      UNLOCK();
                      if (local_29) goto LAB_10009331a;
                    }
                    QArrayData::deallocate(local_19a8,2,8);
                  }
                  goto LAB_10009331a;
                }
                puVar7 = (uint *)*param_3;
                if (1 < *puVar7) {
                  FUN_10003cb70(param_3,puVar7[1]);
                  puVar7 = (uint *)*param_3;
                }
                puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
                pQVar2 = (QArrayData *)*puVar1;
                if (1 < *(int *)pQVar2 + 1U) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + 1;
                  local_29 = *(int *)pQVar2 != 0;
                  UNLOCK();
                }
                pQVar3 = (QArrayData *)puVar1[1];
                if (1 < *(int *)pQVar3 + 1U) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + 1;
                  local_29 = *(int *)pQVar3 != 0;
                  UNLOCK();
                }
                local_1978 = puVar1[2];
                local_1988 = pQVar2;
                local_1980 = pQVar3;
                FUN_100092ed0(param_1,&local_1988,0,param_4);
                if (*(int *)pQVar3 != -1) {
                  if (*(int *)pQVar3 != 0) {
                    LOCK();
                    *(int *)pQVar3 = *(int *)pQVar3 + -1;
                    local_29 = *(int *)pQVar3 != 0;
                    UNLOCK();
                    if (local_29) goto LAB_100093af2;
                  }
                  QArrayData::deallocate(pQVar3,2,8);
                }
LAB_100093af2:
                if (*(int *)pQVar2 != -1) {
                  if (*(int *)pQVar2 != 0) {
                    LOCK();
                    *(int *)pQVar2 = *(int *)pQVar2 + -1;
                    local_29 = *(int *)pQVar2 != 0;
                    UNLOCK();
                    if (local_29) goto LAB_10009331a;
                  }
                  QArrayData::deallocate(pQVar2,2,8);
                }
                goto LAB_10009331a;
              }
              puVar7 = (uint *)*param_3;
              if (1 < *puVar7) {
                FUN_10003cb70(param_3,puVar7[1]);
                puVar7 = (uint *)*param_3;
              }
              puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
              pQVar2 = (QArrayData *)*puVar1;
              if (1 < *(int *)pQVar2 + 1U) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + 1;
                local_29 = *(int *)pQVar2 != 0;
                UNLOCK();
              }
              pQVar3 = (QArrayData *)puVar1[1];
              if (1 < *(int *)pQVar3 + 1U) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + 1;
                local_29 = *(int *)pQVar3 != 0;
                UNLOCK();
              }
              local_1990 = puVar1[2];
              local_19a0 = pQVar2;
              local_1998 = pQVar3;
              FUN_100092ed0(param_1,&local_19a0,2,param_4);
              if (*(int *)pQVar3 != -1) {
                if (*(int *)pQVar3 != 0) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + -1;
                  local_29 = *(int *)pQVar3 != 0;
                  UNLOCK();
                  if (local_29) goto LAB_100093914;
                }
                QArrayData::deallocate(pQVar3,2,8);
              }
LAB_100093914:
              if (*(int *)pQVar2 != -1) {
                if (*(int *)pQVar2 != 0) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + -1;
                  local_29 = *(int *)pQVar2 != 0;
                  UNLOCK();
                  if (local_29) goto LAB_10009331a;
                }
                QArrayData::deallocate(pQVar2,2,8);
              }
              goto LAB_10009331a;
            }
            puVar7 = (uint *)*param_3;
            if (1 < *puVar7) {
              FUN_10003cb70(param_3,puVar7[1]);
              puVar7 = (uint *)*param_3;
            }
            puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
            pQVar2 = (QArrayData *)*puVar1;
            if (1 < *(int *)pQVar2 + 1U) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + 1;
              local_29 = *(int *)pQVar2 != 0;
              UNLOCK();
            }
            pQVar3 = (QArrayData *)puVar1[1];
            if (1 < *(int *)pQVar3 + 1U) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + 1;
              local_29 = *(int *)pQVar3 != 0;
              UNLOCK();
            }
            local_1960 = puVar1[2];
            local_1970 = pQVar2;
            local_1968 = pQVar3;
            FUN_100092ed0(param_1,&local_1970,2,param_4);
            if (*(int *)pQVar3 != -1) {
              if (*(int *)pQVar3 != 0) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + -1;
                local_29 = *(int *)pQVar3 != 0;
                UNLOCK();
                if (local_29) goto LAB_100093726;
              }
              QArrayData::deallocate(pQVar3,2,8);
            }
LAB_100093726:
            if (*(int *)pQVar2 != -1) {
              if (*(int *)pQVar2 != 0) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + -1;
                local_29 = *(int *)pQVar2 != 0;
                UNLOCK();
                if (local_29) goto LAB_10009331a;
              }
              QArrayData::deallocate(pQVar2,2,8);
            }
            goto LAB_10009331a;
          }
          cVar4 = FUN_100090550(param_1);
          if (cVar4 == '\0') {
            cVar4 = FUN_100090550(param_1);
            if (cVar4 == '\0') {
              iVar5 = FUN_1000905c0(param_1);
              if (iVar5 != 1) {
                if (iVar5 != 0) {
                  local_1a10 = (QArrayData *)QString::fromAscii_helper("",0);
                  FUN_100099d90(local_868,5,param_4,0xffffffff);
                  local_850 = &local_1a10;
                  local_840 = 0;
                  FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_868);
                  *(undefined1 *)(param_1 + 0x28) = 0;
                  if (*(int *)local_1a10 != -1) {
                    if (*(int *)local_1a10 != 0) {
                      LOCK();
                      *(int *)local_1a10 = *(int *)local_1a10 + -1;
                      local_29 = *(int *)local_1a10 != 0;
                      UNLOCK();
                      if (local_29) goto LAB_10009331a;
                    }
                    QArrayData::deallocate(local_1a10,2,8);
                  }
                  goto LAB_10009331a;
                }
                puVar7 = (uint *)*param_3;
                if (1 < *puVar7) {
                  FUN_10003cb70(param_3,puVar7[1]);
                  puVar7 = (uint *)*param_3;
                }
                puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
                pQVar2 = (QArrayData *)*puVar1;
                if (1 < *(int *)pQVar2 + 1U) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + 1;
                  local_29 = *(int *)pQVar2 != 0;
                  UNLOCK();
                }
                pQVar3 = (QArrayData *)puVar1[1];
                if (1 < *(int *)pQVar3 + 1U) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + 1;
                  local_29 = *(int *)pQVar3 != 0;
                  UNLOCK();
                }
                local_19e0 = puVar1[2];
                local_19f0 = pQVar2;
                local_19e8 = pQVar3;
                FUN_100092ed0(param_1,&local_19f0,0,param_4);
                if (*(int *)pQVar3 != -1) {
                  if (*(int *)pQVar3 != 0) {
                    LOCK();
                    *(int *)pQVar3 = *(int *)pQVar3 + -1;
                    local_29 = *(int *)pQVar3 != 0;
                    UNLOCK();
                    if (local_29) goto LAB_100093bda;
                  }
                  QArrayData::deallocate(pQVar3,2,8);
                }
LAB_100093bda:
                if (*(int *)pQVar2 != -1) {
                  if (*(int *)pQVar2 != 0) {
                    LOCK();
                    *(int *)pQVar2 = *(int *)pQVar2 + -1;
                    local_29 = *(int *)pQVar2 != 0;
                    UNLOCK();
                    if (local_29) goto LAB_10009331a;
                  }
                  QArrayData::deallocate(pQVar2,2,8);
                }
                goto LAB_10009331a;
              }
              puVar7 = (uint *)*param_3;
              if (1 < *puVar7) {
                FUN_10003cb70(param_3,puVar7[1]);
                puVar7 = (uint *)*param_3;
              }
              puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
              pQVar2 = (QArrayData *)*puVar1;
              if (1 < *(int *)pQVar2 + 1U) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + 1;
                local_29 = *(int *)pQVar2 != 0;
                UNLOCK();
              }
              pQVar3 = (QArrayData *)puVar1[1];
              if (1 < *(int *)pQVar3 + 1U) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + 1;
                local_29 = *(int *)pQVar3 != 0;
                UNLOCK();
              }
              local_19f8 = puVar1[2];
              local_1a08 = pQVar2;
              local_1a00 = pQVar3;
              FUN_100092ed0(param_1,&local_1a08,1,param_4);
              if (*(int *)pQVar3 != -1) {
                if (*(int *)pQVar3 != 0) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + -1;
                  local_29 = *(int *)pQVar3 != 0;
                  UNLOCK();
                  if (local_29) goto LAB_100093a0a;
                }
                QArrayData::deallocate(pQVar3,2,8);
              }
LAB_100093a0a:
              if (*(int *)pQVar2 != -1) {
                if (*(int *)pQVar2 != 0) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + -1;
                  local_29 = *(int *)pQVar2 != 0;
                  UNLOCK();
                  if (local_29) goto LAB_10009331a;
                }
                QArrayData::deallocate(pQVar2,2,8);
              }
              goto LAB_10009331a;
            }
            puVar7 = (uint *)*param_3;
            if (1 < *puVar7) {
              FUN_10003cb70(param_3,puVar7[1]);
              puVar7 = (uint *)*param_3;
            }
            puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
            pQVar2 = (QArrayData *)*puVar1;
            if (1 < *(int *)pQVar2 + 1U) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + 1;
              local_29 = *(int *)pQVar2 != 0;
              UNLOCK();
            }
            pQVar3 = (QArrayData *)puVar1[1];
            if (1 < *(int *)pQVar3 + 1U) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + 1;
              local_29 = *(int *)pQVar3 != 0;
              UNLOCK();
            }
            local_19c8 = puVar1[2];
            local_19d8 = pQVar2;
            local_19d0 = pQVar3;
            FUN_100092ed0(param_1,&local_19d8,1,param_4);
            if (*(int *)pQVar3 != -1) {
              if (*(int *)pQVar3 != 0) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + -1;
                local_29 = *(int *)pQVar3 != 0;
                UNLOCK();
                if (local_29) goto LAB_10009381b;
              }
              QArrayData::deallocate(pQVar3,2,8);
            }
LAB_10009381b:
            if (*(int *)pQVar2 != -1) {
              if (*(int *)pQVar2 != 0) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + -1;
                local_29 = *(int *)pQVar2 != 0;
                UNLOCK();
                if (local_29) goto LAB_10009331a;
              }
              QArrayData::deallocate(pQVar2,2,8);
            }
            goto LAB_10009331a;
          }
          puVar7 = (uint *)*param_3;
          if (1 < *puVar7) {
            FUN_10003cb70(param_3,puVar7[1]);
            puVar7 = (uint *)*param_3;
          }
          puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
          pQVar2 = (QArrayData *)*puVar1;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
          }
          pQVar3 = (QArrayData *)puVar1[1];
          if (1 < *(int *)pQVar3 + 1U) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + 1;
            local_29 = *(int *)pQVar3 != 0;
            UNLOCK();
          }
          local_19b0 = puVar1[2];
          local_19c0 = pQVar2;
          local_19b8 = pQVar3;
          FUN_100092ed0(param_1,&local_19c0,1,param_4);
          if (*(int *)pQVar3 != -1) {
            if (*(int *)pQVar3 != 0) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + -1;
              local_29 = *(int *)pQVar3 != 0;
              UNLOCK();
              if (local_29) goto LAB_10009362e;
            }
            QArrayData::deallocate(pQVar3,2,8);
          }
LAB_10009362e:
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_29 = *(int *)pQVar2 != 0;
              UNLOCK();
              if (local_29) goto LAB_10009331a;
            }
            QArrayData::deallocate(pQVar2,2,8);
          }
LAB_10009331a:
          QFileInfo::~QFileInfo(local_1940);
          return;
        }
        if (1 < uVar8) {
          FUN_10003cb70(param_3,puVar7[1]);
          pQVar9 = *(QString **)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        }
        pQVar10 = pQVar9->field0_0x0;
        if (1 < *(int *)pQVar10 + 1U) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + 1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
        }
        pQVar2 = (QArrayData *)pQVar9[1].field0_0x0;
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        local_1928 = pQVar9[2].field0_0x0;
        local_1938 = pQVar10;
        local_1930 = pQVar2;
        FUN_100092ed0(param_1,&local_1938,5,param_4);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
            if (local_29) goto LAB_100093494;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100093494:
        if (*(int *)pQVar10 == -1) {
          return;
        }
        if (*(int *)pQVar10 == 0) goto LAB_1000934b1;
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_29 = *(int *)pQVar10 != 0;
        UNLOCK();
      }
      else {
        if (1 < uVar8) {
          FUN_10003cb70(param_3,puVar7[1]);
          puVar7 = (uint *)*param_3;
        }
        puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
        pQVar10 = (QTypedArrayData<unsigned_short> *)*puVar1;
        if (1 < *(int *)pQVar10 + 1U) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + 1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
        }
        pQVar2 = (QArrayData *)puVar1[1];
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        local_1910 = puVar1[2];
        local_1920 = pQVar10;
        local_1918 = pQVar2;
        FUN_100092ed0(param_1,&local_1920,0,param_4);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
            if (local_29) goto LAB_1000933cc;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_1000933cc:
        if (*(int *)pQVar10 == -1) {
          return;
        }
        if (*(int *)pQVar10 == 0) goto LAB_1000934b1;
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_29 = *(int *)pQVar10 != 0;
        UNLOCK();
      }
    }
    else {
      puVar7 = (uint *)*param_3;
      if (1 < *puVar7) {
        FUN_10003cb70(param_3,puVar7[1]);
        puVar7 = (uint *)*param_3;
      }
      puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
      pQVar10 = (QTypedArrayData<unsigned_short> *)*puVar1;
      if (1 < *(int *)pQVar10 + 1U) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + 1;
        local_29 = *(int *)pQVar10 != 0;
        UNLOCK();
      }
      pQVar2 = (QArrayData *)puVar1[1];
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      local_18f8 = puVar1[2];
      local_1908 = pQVar10;
      local_1900 = pQVar2;
      FUN_100092ed0(param_1,&local_1908,4,param_4);
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
          if (local_29) goto LAB_1000931bb;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1000931bb:
      if (*(int *)pQVar10 == -1) {
        return;
      }
      if (*(int *)pQVar10 == 0) goto LAB_1000934b1;
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_29 = *(int *)pQVar10 != 0;
      UNLOCK();
    }
  }
  else {
    puVar7 = (uint *)*param_3;
    if (1 < *puVar7) {
      FUN_10003cb70(param_3,puVar7[1]);
      puVar7 = (uint *)*param_3;
    }
    puVar1 = *(undefined8 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
    pQVar10 = (QTypedArrayData<unsigned_short> *)*puVar1;
    if (1 < *(int *)pQVar10 + 1U) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + 1;
      local_29 = *(int *)pQVar10 != 0;
      UNLOCK();
    }
    pQVar2 = (QArrayData *)puVar1[1];
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_18e0 = puVar1[2];
    local_18f0 = pQVar10;
    local_18e8 = pQVar2;
    FUN_100092ed0(param_1,&local_18f0,0,param_4);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if (local_29) goto LAB_1000930e7;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_1000930e7:
    if (*(int *)pQVar10 == -1) {
      return;
    }
    if (*(int *)pQVar10 == 0) goto LAB_1000934b1;
    LOCK();
    *(int *)pQVar10 = *(int *)pQVar10 + -1;
    local_29 = *(int *)pQVar10 != 0;
    UNLOCK();
  }
  if (local_29 != false) {
    return;
  }
LAB_1000934b1:
  QArrayData::deallocate((QArrayData *)pQVar10,2,8);
  return;
}

