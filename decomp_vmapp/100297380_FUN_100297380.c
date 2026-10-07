
void FUN_100297380(long *param_1,long param_2)

{
  FUN_1008e3970("","LocalDevices",0,"[hdd::sata:%u] restart flags 0x%08X dl %llu",
                (short)param_1[0x1fe],*(undefined4 *)(param_2 + 0x30),
                *(ulong *)(param_2 + 0x48) / 1000);
  FUN_100296b80(param_1,*(undefined8 *)(param_2 + 0x38));
  FUN_100402d70(param_1 + 0x26f7);
                    /* WARNING: Could not recover jumptable at 0x000100297401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}

