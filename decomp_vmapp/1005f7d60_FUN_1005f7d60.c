
int FUN_1005f7d60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  char local_52;
  undefined1 local_51;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_52 = '\0';
  puVar1 = (undefined8 *)(param_1 + 0x72);
  local_30 = lVar2;
  cVar6 = FUN_1007ea210(puVar1);
  if (cVar6 == '\0') {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xa0))(local_40);
    iVar7 = FUN_1007ea6f0(puVar1,local_40);
    if (iVar7 != 0) {
      plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10);
      (**(code **)(*plVar3 + 0xb8))(local_50,plVar3,puVar1,&local_52);
      if (local_52 == '\0') {
        FUN_1007d6a70(&local_68,puVar1);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error: can\'t delete state by not existing uuid %s",
                      local_60 + *(long *)(local_60 + 0x10));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_51 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1005f7f88;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_1005f7f88:
        iVar7 = -0x7ffe6fec;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_51 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1005f7fe1;
          }
          QArrayData::deallocate(local_68,2,8);
        }
        goto LAB_1005f7fe1;
      }
      plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10);
      iVar7 = (**(code **)(*plVar3 + 0x90))(plVar3,puVar1,5);
      if (iVar7 < 0) {
LAB_1005f7efd:
        pcVar8 = "Commit task \'Delete\' failed with error 0x%x";
      }
      else {
        lVar4 = *(long *)(param_1 + 0x58);
        uVar5 = *puVar1;
        *(undefined8 *)(lVar4 + 0x1170) = *(undefined8 *)(param_1 + 0x7a);
        *(undefined8 *)(lVar4 + 0x1168) = uVar5;
        iVar7 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0x18))()
        ;
        if (iVar7 < 0) goto LAB_1005f7efd;
        iVar7 = FUN_1005fb3b0(param_1);
        if (iVar7 < 0) {
          pcVar8 = "Deleting files failed with error 0x%x";
        }
        else {
          plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10);
          (**(code **)(*plVar3 + 0x78))
                    (plVar3,puVar1,*(undefined1 *)(param_1 + 0x82),param_1 + 0x62);
          iVar7 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0x18))
                            ();
          if (iVar7 < 0) goto LAB_1005f7efd;
          iVar7 = (**(code **)(**(long **)(param_1 + 0x58) + 0x368))();
          if (-1 < iVar7) goto LAB_1005f7fe1;
          pcVar8 = "Switch to default state after delete failed with error 0x%x";
        }
      }
      FUN_1008e3970("","vdisk",0,pcVar8,iVar7);
      goto LAB_1005f7fe1;
    }
  }
  FUN_1008e3970("","vdisk",0,"Error: can\'t delete temporary or null UID");
  iVar7 = -0x7ffe6fec;
LAB_1005f7fe1:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

