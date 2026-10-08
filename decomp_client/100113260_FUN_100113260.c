
undefined1 FUN_100113260(QString *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  long local_e0 [2];
  QFileInfo local_d0 [15];
  undefined1 local_c1;
  undefined1 local_c0;
  char local_bf;
  char local_be;
  char local_bd;
  char local_bc;
  char local_bb;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  cVar1 = FUN_10010e760();
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    QFileInfo::QFileInfo(local_d0,param_1);
    lVar3 = QFileInfo::size();
    QFileInfo::~QFileInfo(local_d0);
    if (lVar3 < 0x64001) {
      uVar7 = 0;
    }
    else {
      QFile::QFile((QFile *)local_e0,param_1);
      cVar1 = QFile::open((QFile *)local_e0,1);
      if (cVar1 == '\0') {
        uVar7 = 0;
      }
      else {
        (**(code **)(local_e0[0] + 0x88))(local_e0,0x8000);
        QIODevice::read((char *)local_e0,(longlong)&local_c0);
        if ((((local_bf != 'C') || (local_be != 'D')) || (local_bd != '0')) ||
           ((local_bc != '0' || (uVar7 = 1, local_bb != '1')))) {
          uVar6 = 0;
          uVar8 = 0;
          do {
            (**(code **)(local_e0[0] + 0x88))(local_e0,(long)(int)(&DAT_100e14cc8)[uVar6] << 0xb);
            QIODevice::read((longlong)&local_f8);
            pQVar5 = local_f8 + *(long *)(local_f8 + 0x10);
            if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_f8 + 4) != 0)) {
              lVar4 = 0;
              do {
                if (pQVar5[lVar4] == (QArrayData)0x0) break;
                lVar4 = lVar4 + 1;
              } while ((uint)lVar4 < *(uint *)(local_f8 + 4));
              if ((int)lVar4 == -1) {
                _strlen((char *)pQVar5);
              }
            }
            QString::fromUtf8_helper((char *)&local_f0,(int)pQVar5);
            QString::normalized(&local_e8,&local_f0,1,0);
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_c1 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_c1) goto LAB_10011345d;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_10011345d:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_c1 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_c1) goto LAB_100113499;
              }
              QArrayData::deallocate(local_f8,1,8);
            }
LAB_100113499:
            iVar2 = QString::compare_helper
                              (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),
                               "NeXT",0xffffffff,1);
            cVar1 = '\x05';
            uVar7 = 1;
            if ((iVar2 != 0) &&
               (iVar2 = QString::compare_helper
                                  (local_e8 + *(long *)(local_e8 + 0x10),
                                   *(undefined4 *)(local_e8 + 4),"dlV2",0xffffffff,1), iVar2 != 0))
            {
              iVar2 = QString::compare_helper
                                (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4)
                                 ,"dlV3",0xffffffff,1);
              uVar7 = 1;
              if (iVar2 != 0) {
                uVar7 = uVar8;
              }
              cVar1 = (iVar2 == 0) * '\x05';
            }
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_c1 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_c1) goto LAB_100113570;
              }
              QArrayData::deallocate(local_e8,2,8);
            }
LAB_100113570:
            uVar6 = uVar6 + 1;
          } while ((cVar1 == '\0') && (uVar8 = uVar7, (uVar6 & 0xfffffffe) == 0));
        }
        (**(code **)(local_e0[0] + 0x70))(local_e0);
        lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      QFile::~QFile((QFile *)local_e0);
    }
  }
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

