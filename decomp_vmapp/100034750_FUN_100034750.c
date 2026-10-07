
undefined8
FUN_100034750(long param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
             undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  QMutex::lock();
  uVar4 = 3;
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar4 = QThread::currentThread();
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (*(int *)(param_1 + 0x78) != 0) {
        FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.cmd not CMD_NONE");
      }
      if (*(int *)(param_1 + 0x7c) != 0) {
        FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.currentCmd not CMD_NONE");
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_10009da60(DAT_1011c3698 + 0x1a70,param_6);
    }
    else if (param_3 == 4) {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 4) {
        *(int *)(param_1 + 0x7c) = 0;
      }
      else if (iVar1 == 0) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("PRINTING_TOOL","vm",1,
                        "answer CMD_RESULT on empty command (m_command.currentCmd == CMD_NONE)");
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        if (*(int *)(param_1 + 0x78) == 0) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("PRINTING_TOOL","vm",1,
                          "answer CMD_RESULT on empty command (m_command.cmd == CMD_NONE)");
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x78) = 0;
          FUN_10009da40(DAT_1011c3698 + 0x1a70,param_4);
        }
      }
    }
    piVar3 = (int *)(param_1 + 0x7c);
    uVar4 = 1;
    if (*piVar3 == 0) {
      if (*(int *)(param_1 + 0x88) == param_5) {
        if (*(int *)(param_1 + 0x78) == 0) {
          *(undefined8 *)(param_1 + 0x70) = param_2;
          uVar4 = 2;
        }
        else {
          *piVar3 = *(int *)(param_1 + 0x78);
        }
      }
      else {
        *piVar3 = 4;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    param_7[1] = *(undefined8 *)(param_1 + 0x78);
    *param_7 = uVar2;
    QString::operator=((QString *)(param_7 + 2),(QString *)(param_1 + 0x80));
    *(undefined4 *)(param_7 + 3) = *(undefined4 *)(param_1 + 0x88);
    FUN_100037480(param_7 + 4,param_1 + 0x90);
  }
  QMutex::unlock();
  return uVar4;
}

