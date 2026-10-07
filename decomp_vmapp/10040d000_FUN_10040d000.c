
void FUN_10040d000(undefined8 *param_1,byte param_2)

{
  if (((int)(param_2 ^ 1) <= DAT_1011b55f8) || (param_2 == 1)) {
    FUN_1008e3970(*param_1,"","PrlAudioCore",param_2 ^ 1,
                  "AudioFormat: \n\tformat_id=%d\n\tformat_flags=%d\n\tframes_per_pack=%d\n\tchannels_per_frame=%d\n\tbits_per_channel=%d\n\tsample_rate=%lf"
                  ,*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),
                  *(undefined4 *)((long)param_1 + 0x14),*(undefined4 *)((long)param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 4));
  }
  return;
}

