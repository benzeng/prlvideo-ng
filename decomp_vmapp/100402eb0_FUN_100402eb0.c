
int FUN_100402eb0(int *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 1;
  iVar2 = 0;
LAB_100402ee3:
  do {
    cVar1 = (**(code **)(**(long **)(param_1 + 0xe) + 0x80))();
    if ((param_2 == (code *)0x0) && (cVar1 == '\x01')) {
      FUN_1008e3970("","HddUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "!m_disk_obj->IsFlushPending() || cb","Hdd.cpp",0x4cf,"__Flush");
    }
    if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
      cVar1 = (**(code **)(**(long **)(param_1 + 0xe) + 0x80))();
      if ((param_2 != (code *)0x0) && (cVar1 != '\0')) {
LAB_100402fc8:
        (**(code **)(**(long **)(param_1 + 0xe) + 0x78))(*(long **)(param_1 + 0xe),param_2,param_3);
        return iVar2;
      }
    }
    else if (param_2 != (code *)0x0) goto LAB_100402fc8;
    iVar2 = (**(code **)(**(long **)(param_1 + 0xe) + 0x70))();
    if (param_2 != (code *)0x0) {
      (*param_2)(param_3,iVar2);
      return iVar2;
    }
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar4 < *param_1) {
LAB_100402ee0:
      iVar4 = iVar4 + 1;
      goto LAB_100402ee3;
    }
    if ((*(byte *)(param_1 + 0x5b) & 0x10) != 0) {
      return iVar2;
    }
    uVar3 = FUN_100768f60();
    cVar1 = FUN_1003f9bf0(0,iVar2,uVar3,*(undefined8 *)(param_1 + 0xe),param_1[0x10]);
    if (cVar1 != '\0') goto LAB_100402ee0;
    FUN_1000a7de0(DAT_1011c3698);
    iVar4 = iVar4 + 1;
  } while( true );
}

