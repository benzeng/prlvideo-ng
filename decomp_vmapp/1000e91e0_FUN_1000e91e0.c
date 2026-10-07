
void FUN_1000e91e0(long param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  local_48 = FUN_1002b11b0(*(undefined8 *)(param_1 + 0x10),0,&local_34,&local_38,&local_3c);
  if (param_2 != '\0') {
    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x30));
    }
    pvVar3 = _valloc((ulong)(uint)(local_34 * local_38 * 4));
    *(void **)(param_1 + 0x30) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      cVar2 = FUN_1004b2b30(DAT_1011cc7f0,0,pvVar3);
      if (cVar2 != '\0') {
        local_48 = *(undefined8 *)(param_1 + 0x30);
        local_3c = local_34 << 2;
      }
    }
  }
  puVar4 = operator_new(0x20);
  iVar1 = local_3c;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  uVar5 = _CFDataCreateWithBytesNoCopy
                    (uVar6,local_48,local_3c * local_38,
                     *(undefined8 *)PTR__kCFAllocatorNull_100ba23b8);
  *puVar4 = uVar5;
  uVar6 = _CFDataCreateMutable(uVar6,0);
  puVar4[1] = uVar6;
  *(int *)(puVar4 + 2) = local_34;
  *(int *)((long)puVar4 + 0x14) = local_38;
  *(int *)(puVar4 + 3) = iVar1;
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  return;
}

