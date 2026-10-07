
void * FUN_100420090(char *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  mode_t mVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 *puVar7;
  code *pcVar8;
  long lVar9;
  QArrayData *pQVar10;
  bool bVar11;
  string local_a8 [28];
  undefined4 local_8c;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  char *local_40;
  undefined1 local_31;
  
  local_40 = (char *)0x0;
  qgetenv((char *)&local_48);
  lVar9 = 0;
  pQVar10 = local_48 + *(long *)(local_48 + 0x10);
  if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
    lVar9 = 0;
    do {
      if (pQVar10[lVar9] == (QArrayData)0x0) break;
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < *(uint *)(local_48 + 4));
  }
  local_50 = (QArrayData *)QString::fromAscii_helper((char *)pQVar10,(int)lVar9);
  local_58 = (QArrayData *)QString::fromAscii_helper("OFF",3);
  iVar3 = QString::indexOf(&local_50,&local_58,0,0);
  bVar11 = true;
  if (iVar3 == -1) {
    lVar9 = 0;
    pQVar10 = local_48 + *(long *)(local_48 + 0x10);
    if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
      lVar9 = 0;
      do {
        if (pQVar10[lVar9] == (QArrayData)0x0) break;
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < *(uint *)(local_48 + 4));
    }
    local_60 = (QArrayData *)QString::fromAscii_helper((char *)pQVar10,(int)lVar9);
    local_68 = (QArrayData *)QString::fromAscii_helper("0",1);
    iVar3 = QString::indexOf(&local_60,&local_68,0,1);
    bVar11 = iVar3 != -1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004201c5;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1004201c5:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004201f5;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1004201f5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420225;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100420225:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420255;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100420255:
  if (bVar11) {
    FUN_1008e3970("","PrlBreakpad",0,"Parallels crash handler is turned off!");
    pvVar5 = (void *)0x0;
    goto LAB_10042097a;
  }
  pvVar5 = DAT_1011bbdc0;
  if (DAT_1011bbdc0 != (void *)0x0) goto LAB_10042097a;
  _setlocale(0,"");
  _setlocale(4,"C");
  DAT_1011bbdc8 = (void *)0x0;
  DAT_1011bbdd0 = 0;
  if (param_1 == (char *)0x0) {
LAB_100420309:
    FUN_1006e1c30(&local_70);
    QDir::QDir((QDir *)&local_78,&local_70);
    cVar1 = QDir::exists();
    pvVar5 = (void *)0x0;
    if (cVar1 == '\0') {
      mVar2 = _umask(0);
      cVar1 = QDir::mkpath(&local_78);
      _umask(mVar2);
      pvVar5 = (void *)0x0;
      if (cVar1 == '\0') {
        QString::toLocal8Bit();
        FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t create directory \'%s\' for Parallels dumps"
                      ,local_80 + *(long *)(local_80 + 0x10));
        pvVar5 = (void *)0x6;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004203c5;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
    }
LAB_1004203c5:
    QDir::~QDir((QDir *)&local_78);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004203fe;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1004203fe:
    if ((int)pvVar5 != 6) {
      if ((int)pvVar5 != 0) goto LAB_10042097a;
      DAT_1011bbdd8 = 0x400;
      DAT_1011bbde0 = _malloc(0x400);
      if (DAT_1011bbde0 == (char *)0x0) {
        FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t allocate enough for crash handler!");
      }
      else {
        pcVar6 = _getcwd(DAT_1011bbde0,0x400);
        if (pcVar6 == (char *)0x0) {
          FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t get current working directory!");
        }
        else {
          _strlen(pcVar6);
          QString::fromLocal8Bit_helper((char *)&local_88,(int)pcVar6);
          DAT_1011bbdd8 = (long)*(int *)(local_88 + 4);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10042049e;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10042049e:
          DAT_1011bbde8 = 1;
          DAT_1011bbdf0 = _malloc(0x800);
          if (DAT_1011bbdf0 == (void *)0x0) {
            FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t allocate enough for crash handler!");
          }
          else {
            DAT_1011bbdf8 = 1;
            DAT_1011bbe00 = _malloc(0x800);
            if (DAT_1011bbe00 == (void *)0x0) {
              FUN_1008e3970("","PrlBreakpad",0,
                            "Error: can\'t allocate enough for g_buff in crash handler!");
            }
            else {
              DAT_1011bbe08 = 1;
              DAT_1011bbe10 = _malloc(0x800);
              if (DAT_1011bbe10 == (void *)0x0) {
                FUN_1008e3970("","PrlBreakpad",0,
                              "Error: can\'t allocate enough for g_buff2 in crash handler!");
              }
              else {
                DAT_1011bbe18 = _calloc(1,0x38);
                if (DAT_1011bbe18 == (void *)0x0) {
                  FUN_1008e3970("","PrlBreakpad",0,
                                "Error: can\'t allocate enough for g_structTmBuff in crash handler!"
                               );
                }
                else {
                  DAT_1011bbe20 = _malloc(8);
                  if (DAT_1011bbe20 == (void *)0x0) {
                    FUN_1008e3970("","PrlBreakpad",0,
                                  "Error: can\'t allocate enough for g_time_tBuff in crash handler!"
                                 );
                  }
                  else {
                    DAT_1011bbe28 = 0x400;
                    DAT_1011bbe30 = _malloc(0x400);
                    if (DAT_1011bbe30 == (char *)0x0) {
                      FUN_1008e3970("","PrlBreakpad",0,
                                    "Error: can\'t allocate enough for crash handler!");
                    }
                    else {
                      local_8c = 0x400;
                      iVar3 = __NSGetExecutablePath(DAT_1011bbe30,&local_8c);
                      if (iVar3 == 0) {
                        pcVar6 = (char *)_realpath_DARWIN_EXTSN(DAT_1011bbe30,0);
                        if (pcVar6 == (char *)0x0) {
                          FUN_1008e3970("","PrlBreakpad",0,
                                        "Error: can\'t get current executable name!");
                        }
                        else {
                          _free(DAT_1011bbe30);
                          DAT_1011bbe30 = pcVar6;
                          DAT_1011bbe28 = _strlen(pcVar6);
                          puVar7 = _malloc(4);
                          *puVar7 = 0;
                          pcVar8 = FUN_100420ba0;
                          if (param_2 != (code *)0x0) {
                            pcVar8 = param_2;
                          }
                          cVar1 = (*pcVar8)(&local_40,&DAT_1011bbe38);
                          if (cVar1 == '\0') {
                            FUN_1008e3970("","PrlBreakpad",0,
                                          "Error: gen_filename_callback() failed!");
                          }
                          else {
                            pvVar5 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_100ba21c8);
                            pcVar6 = local_40;
                            if (pvVar5 == (void *)0x0) {
                              DAT_1011bbdc0 = (void *)0x0;
                            }
                            else {
                              _strlen(local_40);
                              std::string::__init((char *)local_a8,(ulong)pcVar6);
                              FUN_100426c60(pvVar5,local_a8,param_4,param_3,puVar7,1,0);
                              DAT_1011bbdc0 = pvVar5;
                              std::string::~string(local_a8);
                              pvVar5 = DAT_1011bbdc0;
                              if (DAT_1011bbdc0 != (void *)0x0) goto LAB_10042097a;
                            }
                            FUN_1008e3970("","PrlBreakpad",0,
                                          "Error: can\'t allocate enough for crash handler!");
                          }
                        }
                      }
                      else {
                        FUN_1008e3970("","PrlBreakpad",0,
                                      "Error: can\'t get current executable name!");
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    sVar4 = _strlen(param_1);
    DAT_1011bbdd0 = sVar4;
    pvVar5 = _malloc(sVar4 + 1);
    DAT_1011bbdc8 = pvVar5;
    if (pvVar5 != (void *)0x0) {
      _memcpy(pvVar5,param_1,sVar4);
      *(undefined1 *)((long)pvVar5 + sVar4) = 0;
      goto LAB_100420309;
    }
    FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t allocate enough for crash handler!");
  }
  FUN_1008e3970("","PrlBreakpad",0,"Error: crash handler will be disabled!");
  _free(DAT_1011bbde0);
  DAT_1011bbde0 = (char *)0x0;
  DAT_1011bbdd8 = 0;
  _free(DAT_1011bbe30);
  DAT_1011bbe30 = (char *)0x0;
  DAT_1011bbe28 = 0;
  _free(DAT_1011bbdf0);
  DAT_1011bbdf0 = (void *)0x0;
  DAT_1011bbde8 = 0;
  _free(DAT_1011bbe00);
  DAT_1011bbe00 = (void *)0x0;
  DAT_1011bbdf8 = 0;
  _free(DAT_1011bbe10);
  DAT_1011bbe10 = (void *)0x0;
  DAT_1011bbe08 = 0;
  _free(DAT_1011bbdc8);
  DAT_1011bbdc8 = (void *)0x0;
  DAT_1011bbdd0 = 0;
  _free(local_40);
  local_40 = (char *)0x0;
  _free(DAT_1011bbe38);
  DAT_1011bbe38 = (void *)0x0;
  _free(DAT_1011bbe18);
  DAT_1011bbe18 = (void *)0x0;
  _free(DAT_1011bbe20);
  DAT_1011bbe20 = (void *)0x0;
  pvVar5 = (void *)0x0;
LAB_10042097a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return pvVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return pvVar5;
}

