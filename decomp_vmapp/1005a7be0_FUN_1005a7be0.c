
void FUN_1005a7be0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  if (cVar1 != '\0') {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x1a8))(&local_28);
  if ((*(int *)(local_28 + 4) != 0) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x228))
                        (*(long **)(param_1 + 0x10),&local_28), iVar2 < 0)) {
    FUN_1008e3970("","vdisk",0,"Impersonation set and failed 0x%x",iVar2);
    goto LAB_1005a7ec2;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x1b0))();
  switch(uVar3) {
  case 1:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                      (*(long **)(param_1 + 0x10),param_1 + 0x25,FUN_1005a7630,param_1);
    break;
  case 2:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))
                      (*(long **)(param_1 + 0x10),param_1 + 0x70,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88),FUN_1005a7630,param_1);
    break;
  case 3:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                      (*(long **)(param_1 + 0x10),param_1 + 0x25,FUN_1005a7630,param_1);
    break;
  case 4:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                      (*(long **)(param_1 + 0x10),param_1 + 0x25,*(undefined1 *)(param_1 + 0x45),
                       FUN_1005a7630,param_1);
    break;
  default:
    goto switchD_1005a7c60_caseD_5;
  case 6:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
                      (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x88),FUN_1005a7630,
                       param_1);
    break;
  case 7:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0xa0))
                      (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x60),FUN_1005a7630,param_1);
    break;
  case 9:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
                      (*(long **)(param_1 + 0x10),param_1 + 0x25,param_1 + 0x58,FUN_1005a7630,
                       param_1);
    break;
  case 10:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))
                      (*(long **)(param_1 + 0x10),param_1 + 0x48,param_1 + 0x50);
    break;
  case 0xb:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1c8))
                      (*(long **)(param_1 + 0x10),param_1 + 0x48,param_1 + 0x25,FUN_1005a7630,
                       param_1);
    break;
  case 0xc:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1d0))
                      (*(long **)(param_1 + 0x10),param_1 + 0x48,FUN_1005a7630,param_1);
    break;
  case 0xd:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))
                      (*(long **)(param_1 + 0x10),FUN_1005a7630,param_1);
    break;
  case 0xe:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))
                      (*(long **)(param_1 + 0x10),FUN_1005a7630,param_1);
    break;
  case 0xf:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x290))
                      (*(long **)(param_1 + 0x10),param_1 + 0x25,*(undefined1 *)(param_1 + 0x45),
                       FUN_1005a7630,param_1);
    break;
  case 0x10:
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x298))
                      (*(long **)(param_1 + 0x10),param_1 + 0x58,FUN_1005a7630,param_1);
  }
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"Operation failed with code 0x%x",iVar2);
  }
  else {
switchD_1005a7c60_caseD_5:
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar2 = 1000;
  }
LAB_1005a7ec2:
  *(int *)(param_1 + 0x20) = iVar2;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x188))(*(long **)(param_1 + 0x18),param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

