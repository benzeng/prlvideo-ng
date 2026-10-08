
undefined8 * FUN_100ab5ed0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  size_t local_48 [2];
  int local_38 [6];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_1 = PTR_shared_null_1021e1288;
  local_20 = lVar1;
  QByteArray::resize((int)param_1);
  local_38[0] = 4;
  local_38[1] = 2;
  local_38[2] = 6;
  local_38[3] = 0xb;
  puVar4 = (uint *)*param_1;
  local_48[0] = (size_t)(int)puVar4[1];
  if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar4[1] + 1,puVar4[2] >> 0x1f);
    puVar4 = (uint *)*param_1;
  }
  iVar2 = _sysctl(local_38,4,(void *)((long)puVar4 + *(long *)(puVar4 + 4)),local_48,(void *)0x0,0);
  if (iVar2 < 0) {
    piVar3 = ___error();
    FUN_100df99c0("","IOTCPControlBlockStat",0,
                  "Failed to retrieve TCP control block data with error: %d",*piVar3);
  }
  else {
    QByteArray::resize((int)param_1);
  }
  if (lVar1 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

