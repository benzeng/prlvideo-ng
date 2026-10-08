
void FUN_100abc440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_88;
  undefined4 local_84;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_70 [32];
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_48 = 0;
  uStack_40 = 0;
  local_50 = PTR_shared_null_1021e15e8;
  local_84 = 0;
  iVar1 = FUN_100a68200(local_70,param_2,param_3,0);
  local_88 = 2;
  do {
    if (iVar1 != 0) {
      FUN_100abba40(param_1,local_88,&local_48,&local_50,local_84);
      FUN_100036370(&local_50);
      return;
    }
    pcVar4 = (char *)FUN_100a68370(local_70);
    uVar2 = FUN_100a68390(local_70);
    uVar3 = FUN_100a683a0(local_70);
    switch(uVar3) {
    case 0x2001:
      if (3 < uVar2) {
        local_88 = *(undefined4 *)pcVar4;
      }
      break;
    case 0x2002:
      if ((pcVar4 != (char *)0x0) && (uVar2 == 0xffffffff)) {
        _strlen(pcVar4);
      }
      QString::fromUtf8_helper((char *)&local_80,(int)pcVar4);
      QString::normalized(&local_78,&local_80,1,0);
      FUN_1000341d0(&local_50,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100abc567;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100abc567:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_80,2,8);
      }
      break;
    case 0x2003:
      if (0xf < uVar2) {
        local_48 = *(undefined8 *)pcVar4;
        uStack_40 = *(undefined8 *)(pcVar4 + 8);
      }
      break;
    case 0x2004:
      if (3 < uVar2) {
        local_84 = *(undefined4 *)pcVar4;
      }
    }
    iVar1 = FUN_100a682f0(local_70);
  } while( true );
}

