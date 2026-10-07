
uint FUN_1002825a0(long *param_1,undefined8 param_2,byte *param_3,char param_4,long param_5,
                  int param_6,long param_7,undefined4 param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_40;
  undefined4 local_34;
  
  plVar5 = param_1 + 0x21;
  QMutex::lock();
  if ((param_4 == '\0') || (param_6 == 0)) {
    uVar2 = 2;
    FUN_1008e3970("","LocalDevices",0,"[HDD:scsi] Empty request");
    goto LAB_100282949;
  }
  param_1[0x1e] = param_5;
  *(int *)((long)param_1 + 0xec) = param_6;
  param_1[0x1a] = (long)param_3;
  *(char *)(param_1 + 0x1b) = param_4;
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (bVar1 < 0x56) {
    if (bVar1 < 0x1d) {
      uVar3 = 0x14440011;
LAB_100282656:
      if (((uVar3 >> (uVar2 & 0x1f) & 1) != 0) && (param_1[0x28] == 0)) {
        uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_7,param_8,0);
        goto LAB_100282949;
      }
    }
  }
  else {
    uVar2 = bVar1 - 0x56;
    if (uVar2 < 5) {
      uVar3 = 0x13;
      goto LAB_100282656;
    }
  }
  param_1[0x1f] = param_7;
  *(char *)(param_1 + 0x20) = (char)param_8;
  bVar1 = *param_3;
  uVar4 = 1;
  if (bVar1 < 0x2a) {
    if (3 < bVar1) {
      if ((bVar1 == 4) || (bVar1 == 10)) goto LAB_1002826cf;
      goto LAB_1002826d4;
    }
    if ((bVar1 != 0) && ((bVar1 != 3 || ((int)param_1[0x22] != 0)))) goto LAB_1002826d4;
  }
  else {
    if (bVar1 < 0x5d) {
      if ((bVar1 == 0x2a) || (bVar1 == 0x2e)) {
LAB_1002826cf:
        uVar4 = 2;
      }
    }
    else if ((bVar1 == 0x5d) || (bVar1 == 0xaa)) goto LAB_1002826cf;
LAB_1002826d4:
    FUN_10025b2f0(param_1,uVar4);
    param_3 = (byte *)param_1[0x1a];
    bVar1 = *param_3;
  }
  if (0x55 < bVar1) {
    if (bVar1 < 0x9e) {
      if (0x87 < bVar1) {
        switch(bVar1) {
        case 0x88:
        case 0x8a:
          goto switchD_10028270b_caseD_8;
        default:
          goto switchD_10028270b_caseD_1;
        case 0x8f:
switchD_1002827ed_caseD_8f:
          uVar2 = FUN_100282e40(param_1);
          break;
        case 0x91:
switchD_1002827ed_caseD_91:
          uVar2 = FUN_100282ef0(param_1);
        }
        goto LAB_100282934;
      }
      if (bVar1 < 0x5a) {
        if (bVar1 == 0x56) goto switchD_100282776_caseD_16;
        if (bVar1 == 0x57) goto switchD_100282776_caseD_17;
      }
      else {
        if (bVar1 == 0x5a) {
          local_40 = 0;
          uVar2 = FUN_1002841e0(param_1,&local_40);
          goto LAB_100282934;
        }
        if (bVar1 == 0x7f) goto switchD_1002827ed_caseD_8f;
      }
    }
    else if (bVar1 < 0xaa) {
      if (bVar1 == 0x9e) {
        uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
        goto LAB_100282934;
      }
      if (bVar1 == 0xa8) goto switchD_10028270b_caseD_8;
    }
    else {
      if (bVar1 == 0xaa) {
switchD_10028270b_caseD_8:
        uVar2 = FUN_100282ab0(param_1);
        goto LAB_100282934;
      }
      if (bVar1 == 0xaf) goto switchD_1002827ed_caseD_8f;
    }
    goto switchD_10028270b_caseD_1;
  }
  if (bVar1 < 0x12) {
    switch(bVar1) {
    case 0:
      uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      break;
    default:
      goto switchD_10028270b_caseD_1;
    case 3:
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      break;
    case 4:
      uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      break;
    case 8:
    case 10:
      goto switchD_10028270b_caseD_8;
    }
    goto LAB_100282934;
  }
  if (0x24 < bVar1) {
    if (bVar1 < 0x35) {
      if (bVar1 < 0x2a) {
        if (bVar1 == 0x25) {
          uVar2 = FUN_100282cb0(param_1);
          goto LAB_100282934;
        }
        if (bVar1 == 0x28) goto switchD_10028270b_caseD_8;
      }
      else {
        if (bVar1 == 0x2a) goto switchD_10028270b_caseD_8;
        if (bVar1 == 0x2f) goto switchD_1002827ed_caseD_8f;
      }
    }
    else if (bVar1 == 0x35) goto switchD_1002827ed_caseD_91;
switchD_10028270b_caseD_1:
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    goto LAB_100282934;
  }
  switch(bVar1) {
  case 0x12:
    uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    break;
  default:
    goto switchD_10028270b_caseD_1;
  case 0x16:
switchD_100282776_caseD_16:
    uVar2 = FUN_1004104b0(param_3,(char)param_1[0x1b],0,0,param_1[0x1f],(char)param_1[0x20]);
    goto LAB_1002829b9;
  case 0x17:
switchD_100282776_caseD_17:
    uVar2 = FUN_1004104a0(param_3,(char)param_1[0x1b],0,0,param_1[0x1f],(char)param_1[0x20]);
    goto LAB_1002829b9;
  case 0x1a:
    local_34 = 0;
    uVar2 = FUN_100283b10(param_1,&local_34);
    break;
  case 0x1b:
    uVar2 = (**(code **)(*param_1 + 0x90))(param_1);
    break;
  case 0x1c:
    uVar2 = FUN_1004104d0(param_3,(char)param_1[0x1b],0,0,param_1[0x1f],(char)param_1[0x20],plVar5);
LAB_1002829b9:
    uVar2 = uVar2 >> 0x1e & 2;
  }
LAB_100282934:
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_100282949:
  QMutex::unlock();
  return uVar2;
}

