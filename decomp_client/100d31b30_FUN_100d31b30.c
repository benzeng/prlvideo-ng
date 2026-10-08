
undefined8
FUN_100d31b30(float param_1,float param_2,QString *param_3,QString *param_4,char *param_5,
             code *param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  long local_2860 [2];
  long local_2850 [2];
  QFileInfo local_2840 [8];
  undefined1 local_2838 [10240];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar5 = 0x8b60001;
  local_38 = lVar3;
  if (*(int *)(param_3->field0_0x0 + 4) != 0) {
    if (*(int *)(param_4->field0_0x0 + 4) != 0) {
      QFileInfo::QFileInfo(local_2840,param_3);
      cVar1 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_2840);
      uVar5 = 0x8b60002;
      if (cVar1 != '\0') {
        QFile::QFile((QFile *)local_2850,param_3);
        cVar1 = QFile::open((QFile *)local_2850,1);
        uVar5 = 0x8b60005;
        if (cVar1 != '\0') {
          QFile::QFile((QFile *)local_2860,param_4);
          cVar1 = QFile::open(local_2860,0x22);
          uVar5 = 0x8b60004;
          if (cVar1 != '\0') {
            lVar3 = QFile::size();
            if (0 < lVar3) {
              uVar7 = (uint)param_1;
              lVar6 = 0;
              do {
                if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
                  (**(code **)(local_2860[0] + 0x70))(local_2860);
                  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
                  uVar5 = 0x8b60006;
                  (**(code **)(local_2850[0] + 0x70))(local_2850);
                  goto LAB_100d31e25;
                }
                lVar4 = QIODevice::read((char *)local_2850,(longlong)local_2838);
                if (lVar4 == -1) {
                  (**(code **)(local_2860[0] + 0x70))(local_2860);
                  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
                  uVar5 = 0x8b60007;
                  (**(code **)(local_2850[0] + 0x70))(local_2850);
                  goto LAB_100d31e25;
                }
                lVar4 = QIODevice::write((char *)local_2860,(longlong)local_2838);
                if (lVar4 == -1) {
                  (**(code **)(local_2860[0] + 0x70))(local_2860);
                  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
                  uVar5 = 0x8b60008;
                  (**(code **)(local_2850[0] + 0x70))(local_2850);
                  goto LAB_100d31e25;
                }
                if (param_6 != (code *)0x0) {
                  fVar8 = ((float)lVar6 / (float)lVar3) * param_2;
                  if (((int)fVar8 & 0xffffU) != (uVar7 & 0xffff)) {
                    uVar7 = (uint)(fVar8 + param_1);
                    (*param_6)(uVar7 & 0xffff,param_7);
                  }
                }
                QCoreApplication::processEvents(0,500);
                lVar6 = lVar6 + 0x2800;
              } while (lVar6 < lVar3);
            }
            (**(code **)(local_2860[0] + 0x70))(local_2860);
            lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
            (**(code **)(local_2850[0] + 0x70))(local_2850);
            uVar2 = QFile::permissions();
            uVar5 = 0x8000000;
            QFile::setPermissions(local_2860,uVar2);
          }
LAB_100d31e25:
          QFile::~QFile((QFile *)local_2860);
        }
        QFile::~QFile((QFile *)local_2850);
      }
    }
  }
  if (lVar3 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

