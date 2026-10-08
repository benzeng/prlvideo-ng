
undefined4 FUN_100305900(int param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  QArrayData *local_40;
  
  uVar3 = 2;
  if ((int)param_2 < -0x7fff7fff) {
    if (param_2 + 0x7ffffbbe < 2) {
      return 2;
    }
    if (param_2 == 0x80000373) {
      return 2;
    }
    if (param_2 == 0x80000456) {
      return 2;
    }
  }
  else if ((int)param_2 < 0x32d6) {
    if ((int)param_2 < -0x7ffd9aff) {
      if (param_2 == 0x80008001) {
        return 2;
      }
    }
    else if ((int)param_2 < -0x7ffbbdee) {
      if ((int)param_2 < -0x7ffd8cfe) {
        if ((param_2 + 0x7ffd9aff < 2) || (param_2 == 0x80026505)) {
          uVar4 = FUN_100152280();
          lVar5 = FUN_1001548f0(uVar4,param_3);
          if (lVar5 == 0) {
            QString::toUtf8();
            lVar5 = *(long *)(local_40 + 0x10);
            uVar4 = FUN_100dddcf0(param_2);
            FUN_100df99c0("","prl_client_app",0,"Can\'t find VM %s for %s",local_40 + lVar5,uVar4);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                UNLOCK();
                if (*(int *)local_40 != 0) goto switchD_100305a53_caseD_3bd2;
              }
              QArrayData::deallocate(local_40,1,8);
            }
          }
          else {
            iVar1 = FUN_10018d460(lVar5);
            if (iVar1 == 0x30000009) {
              return 2;
            }
          }
        }
        else if (param_2 == 0x80027260) {
          return 2;
        }
      }
      else if (param_2 == 0x80027302) {
        return 2;
      }
    }
    else {
      uVar2 = param_2 + 0x7ffbbdee;
      if (uVar2 < 6) {
        uVar6 = 0x23;
LAB_100305a69:
        if ((uVar6 >> (uVar2 & 0x1f) & 1) != 0) {
          return 2;
        }
      }
    }
  }
  else if ((int)param_2 < 0x6a75) {
    if ((int)param_2 < 0x3bd0) {
      if ((int)param_2 < 0x3ae6) {
        uVar2 = param_2 - 0x32d6;
        if (uVar2 < 0x19) {
          uVar6 = 0x1000021;
          goto LAB_100305a69;
        }
      }
      else if ((int)param_2 < 0x3b65) {
        if (param_2 == 0x3ae6) {
          return 2;
        }
        if (param_2 == 0x3b26) {
          return 2;
        }
      }
      else {
        if (param_2 == 0x3b65) {
          return 2;
        }
        if (param_2 == 0x3b73) {
          return 2;
        }
      }
    }
    else if ((int)param_2 < 0x3be6) {
      switch(param_2) {
      case 0x3bd0:
switchD_100305a53_caseD_3bd0:
        uVar3 = 3;
      case 0x3bd1:
      case 0x3bd5:
      case 0x3bd8:
        goto switchD_100305a53_caseD_3bd1;
      }
    }
    else if ((param_2 == 0x3be6) || (param_2 == 0x3c1f)) goto switchD_100305a53_caseD_3bd0;
  }
  else {
    if (param_2 == 0x6a75) {
      return 2;
    }
    if (param_2 == 0x6aa5) {
      return 2;
    }
  }
switchD_100305a53_caseD_3bd2:
  uVar3 = CMessageDataProvider::getDefaultButton(param_1,(QString *)(ulong)param_2);
switchD_100305a53_caseD_3bd1:
  return uVar3;
}

