
void FUN_1000335b0(undefined8 param_1,char param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  undefined1 auVar7 [16];
  QArrayData *pQStack_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  long *local_60;
  QString local_58;
  QString QStack_50;
  undefined4 local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_10009a990(&local_40,DAT_1011c3698 + 0x1a70);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  puVar5 = PTR_shared_null_100ba20d0;
  if (*(int *)(**(long **)(local_40[2] + 8) + 0xc) != *(int *)(**(long **)(local_40[2] + 8) + 8)) {
    auVar7._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar7._0_8_ = PTR_shared_null_100ba20d0;
    auVar7._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    do {
      pQStack_f0 = auVar7._8_8_;
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar5;
      QStack_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_f0;
      FUN_100036d00(&local_60,*(undefined8 *)(local_40[2] + 8),0);
      plVar1 = local_60;
      (**(code **)(**(long **)(*(long *)(local_60[2] + 8) + 0x10) + 0xb8))(&local_68);
      FUN_10009d940(&local_70);
      FUN_10009d990(&local_78,&local_68);
      QString::append(&local_70);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000336e4;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1000336e4:
      (**(code **)(**(long **)(*(long *)(plVar1[2] + 8) + 0x10) + 0xa8))(&local_80);
      QString::operator=(&QStack_50,&local_80);
      QString::operator=(&local_58,&local_70);
      local_48 = *(undefined4 *)plVar1[2];
      FUN_100036df0(param_3,&local_58);
      switch(*(undefined4 *)plVar1[2]) {
      case 0:
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          lVar4 = *(long *)(local_88 + 0x10);
          QString::toUtf8();
          lVar3 = *(long *)(local_90 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("PRINTING_TOOL","vm",3,
                        "Added Printer, printerId = %s, hashedprinterId = %s, name = %s",
                        local_88 + lVar4,local_90 + lVar3,local_98 + *(long *)(local_98 + 0x10));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033814;
            }
            QArrayData::deallocate(local_98,1,8);
          }
LAB_100033814:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10003384d;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_10003384d:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033892;
            }
            QArrayData::deallocate(local_88,1,8);
          }
        }
LAB_100033892:
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
        break;
      case 1:
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          lVar4 = *(long *)(local_a0 + 0x10);
          QString::toUtf8();
          lVar3 = *(long *)(local_a8 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("PRINTING_TOOL","vm",3,
                        "Delete Printer, printerId = %s, hashedPrinterId = %s, name = %s",
                        local_a0 + lVar4,local_a8 + lVar3,local_b0 + *(long *)(local_b0 + 0x10));
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10003396c;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_10003396c:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000339ba;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
LAB_1000339ba:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000339f0;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
LAB_1000339f0:
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
        break;
      case 2:
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          lVar4 = *(long *)(local_b8 + 0x10);
          QString::toUtf8();
          lVar3 = *(long *)(local_c0 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("PRINTING_TOOL","vm",3,
                        "Rename Printer, printerId = %s, hashedPrinterId = %s, name = %s",
                        local_b8 + lVar4,local_c0 + lVar3,local_c8 + *(long *)(local_c8 + 0x10));
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033aca;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
LAB_100033aca:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033b18;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_100033b18:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033b4e;
            }
            QArrayData::deallocate(local_b8,1,8);
          }
        }
LAB_100033b4e:
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
        break;
      case 3:
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          lVar4 = *(long *)(local_d0 + 0x10);
          QString::toUtf8();
          lVar3 = *(long *)(local_d8 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("PRINTING_TOOL","vm",3,
                        "Set Default Printer, printerId = %s, hashedPrinterId = %s, name = %s",
                        local_d0 + lVar4,local_d8 + lVar3,local_e0 + *(long *)(local_e0 + 0x10));
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033c28;
            }
            QArrayData::deallocate(local_e0,1,8);
          }
LAB_100033c28:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033c76;
            }
            QArrayData::deallocate(local_d8,1,8);
          }
LAB_100033c76:
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100033cac;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
        }
LAB_100033cac:
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
      }
      if ((param_2 != '\0') && (cVar6 = CHwPrinter::isDefault(), cVar6 != '\0')) {
        QString::operator=(&QStack_50,&local_80);
        QString::operator=(&local_58,&local_70);
        local_48 = 3;
        FUN_100036df0(param_3,&local_58);
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
      }
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100033d50;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100033d50:
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100033d80;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_100033d80:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100033db0;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100033db0:
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      if (*(int *)QStack_50.field0_0x0 != -1) {
        if (*(int *)QStack_50.field0_0x0 != 0) {
          LOCK();
          *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + -1;
          local_31 = *(int *)QStack_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100033e03;
        }
        QArrayData::deallocate((QArrayData *)QStack_50.field0_0x0,2,8);
      }
LAB_100033e03:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100033e33;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100033e33:
    } while (*(int *)(**(long **)(local_40[2] + 8) + 0xc) !=
             *(int *)(**(long **)(local_40[2] + 8) + 8));
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

