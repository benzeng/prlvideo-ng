
void FUN_1002a39f0(QObject *param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 uVar12;
  byte bVar13;
  Connection local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bbe5a0;
  lVar4 = *(long *)(DAT_1011c3698 + 0x1938);
  ___bzero(lVar4 + 0xa000,0x3000);
  iVar7 = FUN_1007da300("devices.battery",1);
  if (iVar7 != 0) {
    lVar9 = FUN_100462f50();
    if (*(int *)(lVar9 + 0x14) == 1) {
      DAT_1011c4a80 = 1000;
    }
    else {
      DAT_1011c4a80 = 0xfa;
    }
    uVar10 = FUN_100462f50();
    QObject::connect(local_40,uVar10,"2battStateChanged( BattWatcher::BatteryState )",param_1,
                     "1onBattStateChanged( BattWatcher::BatteryState )",2);
    QMetaObject::Connection::~Connection(local_40);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    uVar5 = CVmRunTimeOptions::isShowBatteryStatus();
    uVar12 = 0;
    if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0xe00) {
      uVar12 = uVar5;
    }
    iVar7 = FUN_1007da300("devices.battery.show",uVar12);
    if (iVar7 != 0) {
      FUN_100463d50(local_48);
      while ((*(int *)(lVar4 + 0xa0b0) == 0 && (cVar6 = FUN_100463df0(local_48), cVar6 != '\0'))) {
        uVar3 = *(uint *)(lVar4 + 0xa0b0);
        FUN_100463e00(&local_50,local_48);
        plVar11 = (long *)FUN_100463b90(&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002a3b7f;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1002a3b7f:
        if ((plVar11 == (long *)0x0) || (iVar7 = (**(code **)*plVar11)(plVar11), iVar7 != 0)) {
          lVar9 = (ulong)uVar3 * 0xb0;
          plVar1 = (long *)(lVar4 + 0xa000 + lVar9);
          *plVar1 = (long)plVar11;
          *(undefined1 *)(lVar4 + 0xa0aa + lVar9) = 0;
          *(undefined2 *)(lVar4 + 0xa0a8 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa0a0 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa098 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa090 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa088 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa080 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa078 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa070 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa068 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa060 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa058 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa050 + lVar9) = 0;
          *(undefined8 *)(lVar4 + 0xa048 + lVar9) = 0;
          *(undefined2 *)(lVar4 + 0xa044 + lVar9) = 0xffff;
          *(undefined8 *)(lVar4 + 0xa03c + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa034 + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa02c + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa024 + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa01c + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa014 + lVar9) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 0xa00c + lVar9) = 0xffffffffffffffff;
          *(undefined2 *)(lVar4 + 0xa040 + lVar9) = 0x1121;
          *(undefined2 *)(lVar4 + 0xa012 + lVar9) = 0x8000;
          *(undefined2 *)(lVar4 + 0xa038 + lVar9) = 0;
          *(undefined2 *)(lVar4 + 0xa024 + lVar9) = 1;
          FUN_1002a3f70(plVar1);
          iVar7 = *(int *)(lVar4 + 0xa0b0);
          if (iVar7 == 0) {
            plVar1 = (long *)*plVar1;
            iVar7 = 0;
            if (plVar1 != (long *)0x0) {
              lVar9 = *(long *)(DAT_1011c3698 + 0x1938);
              bVar2 = *(byte *)(lVar9 + 0xc0d8);
              iVar7 = (**(code **)(*plVar1 + 0x10))(plVar1);
              iVar8 = (**(code **)(*plVar1 + 8))(plVar1);
              bVar13 = iVar7 != 0 | 0x40;
              if (iVar8 != 0) {
                bVar13 = iVar7 != 0 | 0x42;
              }
              *(byte *)(lVar9 + 0xc0d8) = (bVar2 ^ bVar13) * '\x02' & 4 | bVar13;
              iVar7 = *(int *)(lVar4 + 0xa0b0);
            }
          }
          *(int *)(lVar4 + 0xa0b0) = iVar7 + 1;
        }
        else {
          FUN_100463e00(&local_60,local_48);
          QString::toUtf8();
          FUN_1008e3970("","LocalDevices",0,"Battery \"%s\" is not present",
                        local_58 + *(long *)(local_58 + 0x10));
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002a3de0;
            }
            QArrayData::deallocate(local_58,1,8);
          }
LAB_1002a3de0:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002a3e10;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1002a3e10:
          (**(code **)(*plVar11 + 0xa0))(plVar11);
        }
        FUN_100463dc0(local_48);
      }
      FUN_100463d90(local_48);
      if (*(int *)(lVar4 + 0xa0b0) != 0) {
        uVar10 = FUN_100462f50();
        QObject::connect(local_68,uVar10,"2battTimeRemainingChanged()",param_1,
                         "1onBattTimeRemainingChanged()",1);
        QMetaObject::Connection::~Connection(local_68);
      }
    }
  }
  return;
}

