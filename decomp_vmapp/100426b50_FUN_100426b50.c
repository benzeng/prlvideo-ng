
bool FUN_100426b50(void *param_1,char param_2)

{
  ipc_space_t task;
  mach_port_name_t name;
  char cVar1;
  int iVar2;
  kern_return_t kVar3;
  long lVar4;
  bool bVar5;
  pthread_attr_t local_78;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  bVar5 = false;
  local_38 = lVar4;
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0xa0),(pthread_mutexattr_t *)0x0);
  if (iVar2 != 0) goto LAB_100426c3a;
  task = *(ipc_space_t *)PTR__mach_task_self__100ba25d0;
  kVar3 = _mach_port_allocate(task,1,(mach_port_name_t *)((long)param_1 + 0x88));
  if (kVar3 == 0) {
    name = *(mach_port_name_t *)((long)param_1 + 0x88);
    kVar3 = _mach_port_insert_right(task,name,name,0x14);
    if ((kVar3 != 0) || (param_2 == '\0')) {
LAB_100426bdf:
      if (kVar3 == 0) {
        _pthread_attr_init(&local_78);
        _pthread_attr_setdetachstate(&local_78,2);
        iVar2 = _pthread_create((pthread_t *)((long)param_1 + 0x80),&local_78,(void **)FUN_100427690
                                ,param_1);
        _pthread_attr_destroy(&local_78);
        kVar3 = (uint)(iVar2 != 0) + (uint)(iVar2 != 0) * 4;
      }
      goto LAB_100426c2a;
    }
    cVar1 = FUN_100427be0(param_1);
    if (cVar1 != '\0') goto LAB_100426bdf;
    bVar5 = false;
  }
  else {
LAB_100426c2a:
    bVar5 = kVar3 == 0;
  }
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100426c3a:
  if (lVar4 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

