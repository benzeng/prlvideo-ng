
void FUN_100699360(long param_1)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  FUN_10018c250(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  _PrlVm_ToolsOpenFileBrowser(local_18);
  if (local_18 != 0) {
    _PrlHandle_Free();
  }
  return;
}

