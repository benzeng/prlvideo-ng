
void FUN_1002b4580(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong local_58;
  uint local_40;
  int iStack_3c;
  long local_38;
  
  if ((char)param_1[0xd5] == '\0') {
    local_58 = 0;
    do {
      iVar4 = FUN_1007d7370(param_1[0x13],&local_40,1);
      iVar1 = iStack_3c;
      if (iVar4 == 1) {
        lVar5 = FUN_1007d88c0();
        if (iVar1 == 0x80) {
          lVar2 = param_1[(ulong)local_40 + 0x14];
          uVar3 = FUN_1007d8840();
          lVar5 = ((ulong)uVar3 / 1000) * (lVar5 - lVar2);
          if ((-1 < lVar5) &&
             (uVar6 = (int)param_1[0x12] - lVar5, uVar6 != 0 && lVar5 <= (int)param_1[0x12])) {
            *(long *)(param_1[8] + 0xf0) = *(long *)(param_1[8] + 0xf0) + 1;
            *(long *)(param_1[9] + 0xf0) = *(long *)(param_1[9] + 0xf0) + uVar6;
            QThread::msleep(uVar6);
          }
        }
        else {
          param_1[(ulong)local_40 + 0x14] = lVar5;
        }
        iVar1 = *(int *)((long)param_1 + 0x94);
        if ((long)iVar1 != 0) {
          iVar4 = FUN_10061ba50(local_40);
          if ((local_40 == 0x67 || iVar4 != 0) && (CONCAT44(iStack_3c,local_40) < 0x100000000)) {
            if (local_58 <= (ulong)param_1[(ulong)local_40 + 0x14]) {
              local_58 = param_1[(ulong)local_40 + 0x14];
            }
            lVar5 = FUN_1007d88c0();
            QThread::msleep((iVar1 + lVar5) - local_58);
          }
        }
        *(long *)(param_1[10] + 0xf0) =
             *(long *)(param_1[10] + 0xf0) + (param_1[(ulong)local_40 + 0x14] - local_38);
        (**(code **)(*param_1 + 0x80))(param_1,CONCAT44(iStack_3c,local_40),iStack_3c);
      }
      else {
        QMutex::lock();
        lVar5 = param_1[0x13];
        if ((*(uint *)(lVar5 + 0x14) & *(int *)(lVar5 + 0xc) - *(int *)(lVar5 + 8)) == 0) {
          QWaitCondition::wait((QMutex *)(param_1 + 0x11),(ulong)(param_1 + 0x10));
        }
        QMutex::unlock();
      }
    } while ((char)param_1[0xd5] == '\0');
  }
  return;
}

