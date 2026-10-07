
void FUN_10074fa30(long param_1)

{
  task_t task;
  int iVar1;
  kern_return_t kVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    iVar1 = _sigaction(10,(sigaction *)(param_1 + 0x98),(sigaction *)0x0);
    if (iVar1 != 0) {
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      FUN_1008e3970("","Compression",0,"sigaction() failed: %s",pcVar4);
    }
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(int *)(param_1 + 0xac) != 0) {
      task = *(task_t *)PTR__mach_task_self__100ba25d0;
      lVar6 = 0;
      do {
        kVar2 = _task_set_exception_ports
                          (task,*(exception_mask_t *)(param_1 + 0xb0 + lVar6 * 4),
                           *(mach_port_t *)(param_1 + 0x130 + lVar6 * 4),
                           *(exception_behavior_t *)(param_1 + 0x1b0 + lVar6 * 4),
                           *(thread_state_flavor_t *)(param_1 + 0x230 + lVar6 * 4));
        if (kVar2 != 0) {
          FUN_1008e3970("","Compression",0,"task_set_exception_ports() failed: %d",kVar2);
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < *(uint *)(param_1 + 0xac));
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  puVar5 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
  *puVar5 = 0;
  return;
}

