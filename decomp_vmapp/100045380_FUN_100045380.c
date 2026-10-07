
undefined8 FUN_100045380(long param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (1 < param_3[1] - 1U) {
    return 0xf0000002;
  }
  iVar1 = *param_3;
  if (iVar1 < 100) {
    if (iVar1 == 0) {
      uVar4 = FUN_1000456b0(param_1,param_2,param_3,param_4);
      return uVar4;
    }
switchD_1000453f8_caseD_66:
    FUN_1008e3970("SGAH","vm",0,"Error: invalid command from guest: cmd=%i, size=%i",iVar1,
                  param_3[4]);
    uVar4 = 0xf0000002;
  }
  else {
    uVar4 = 0xf0000021;
    switch(iVar1) {
    case 100:
      FUN_100045900(param_1,0);
      break;
    case 0x65:
      QMutex::lock();
      if (*(char *)(param_1 + 0x19a) != '\0') {
        *(undefined1 *)(param_1 + 0x19a) = 0;
        FUN_100042ce0(param_1);
      }
      QMutex::unlock();
      break;
    default:
      goto switchD_1000453f8_caseD_66;
    case 0x68:
    case 0x69:
    case 0x6c:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x75:
    case 0x7c:
    case 0x7d:
    case 0x81:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x90:
    case 0x91:
    case 0x93:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
      break;
    case 0x95:
      QMutex::lock();
      lVar2 = *(long *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = param_2;
      pvVar3 = *(void **)(param_1 + 0x188);
      *(int **)(param_1 + 0x188) = param_3;
      *(undefined4 *)(param_1 + 400) = param_4;
      QMutex::unlock();
      if (lVar2 != 0) {
        FUN_1004c07d0(param_1 + 0x10,lVar2,0xf0000024);
      }
      _free(pvVar3);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

