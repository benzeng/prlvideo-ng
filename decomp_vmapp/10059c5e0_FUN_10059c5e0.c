
undefined4 FUN_10059c5e0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_32;
  
  local_38 = 0;
  if (param_2 == 0) {
    FUN_1008e3970("","vdisk",0,"Error in parameters. Received NULL as storage");
    local_38 = 0x80021011;
  }
  else {
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar1 = *(long *)(param_2 + 0x30);
      plVar4 = *(long **)(param_2 + 0x38);
      lVar2 = *plVar4;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar2;
      *(undefined8 *)(param_2 + 0x40) = 0;
      while (plVar4 != (long *)(param_2 + 0x30)) {
        plVar3 = (long *)plVar4[1];
        FUN_10059f1a0(plVar4 + 2);
        operator_delete(plVar4);
        plVar4 = plVar3;
      }
    }
    plVar4 = (long *)FUN_10059ac80(param_1,3,&local_38);
    if (plVar4 == (long *)0x0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error after opening disk %s: 0x%x",
                    local_40 + *(long *)(local_40 + 0x10),local_38);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return local_38;
          }
          local_32 = 0;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
    else {
      local_38 = (**(code **)(*plVar4 + 0x1a0))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return local_38;
}

