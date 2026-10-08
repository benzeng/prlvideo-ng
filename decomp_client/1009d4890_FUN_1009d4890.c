
undefined1 FUN_1009d4890(long param_1,char param_2)

{
  task_t task;
  kern_return_t kVar1;
  long lVar2;
  uint *puVar3;
  
  if (*(sigaction **)(param_1 + 0xe8) != (sigaction *)0x0) {
    _sigaction(6,*(sigaction **)(param_1 + 0xe8),(sigaction *)0x0);
    if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0xe8));
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    DAT_1023137c8 = 0;
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    puVar3 = *(uint **)(param_1 + 0x90);
    lVar2 = 0;
    if (*puVar3 != 0) {
      task = *(task_t *)PTR__mach_task_self__1021e1c58;
      do {
        kVar1 = _task_set_exception_ports
                          (task,puVar3[lVar2 + 1],puVar3[lVar2 + 0xf],puVar3[lVar2 + 0x1d],
                           puVar3[lVar2 + 0x2b]);
        if (kVar1 != 0) {
          return 0;
        }
        puVar3 = *(uint **)(param_1 + 0x90);
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *puVar3);
    }
    if ((puVar3 != (uint *)0x0) && (param_2 == '\0')) {
      operator_delete(puVar3);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return 1;
}

