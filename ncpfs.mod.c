#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5bf0035a, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf84dfa24, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa98de086, "release_sock" },
	{ 0x3772f841, "kmem_cache_destroy" },
	{ 0xece912ee, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe858a70b, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0xa676f4b0, "unload_nls" },
	{ 0xff87cd18, "lockref_get_not_dead" },
	{ 0xfc5b1b43, "make_bad_inode" },
	{ 0x77dd1b2f, "sockfd_lookup" },
	{ 0xfdc1f059, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x599a4a0, "__mark_inode_dirty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x65c9721f, "inode_permission" },
	{ 0x1feedf17, "generic_write_checks" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf9431644, "from_kuid_munged" },
	{ 0xf7efa283, "kill_anon_super" },
	{ 0x9c743aa4, "dget_parent" },
	{ 0x99b9a29d, "pid_vnr" },
	{ 0x36b98c7b, "is_bad_inode" },
	{ 0x4ef95ea2, "pagecache_get_page" },
	{ 0x771ad568, "touch_atime" },
	{ 0xfbdf76e8, "generic_delete_inode" },
	{ 0xc234a197, "mem_cgroup_from_task" },
	{ 0x3e90524b, "dput" },
	{ 0xc736c8d8, "sock_recvmsg" },
	{ 0xf591fbaa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd41c331d, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2c6bdf46, "d_add" },
	{ 0xcc5e7df, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xe0be768, "super_setup_bdi" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x9be7ba09, "mount_nodev" },
	{ 0x3ff78086, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x30a3dc7e, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c3ca792, "from_kgid_munged" },
	{ 0x4a801e24, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x333c7564, "__insert_inode_hash" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8dec6ff7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x37e40dca, "d_rehash" },
	{ 0x22d5be56, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x74480c4f, "sock_sendmsg" },
	{ 0x96be8d10, "iov_iter_kvec" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0xf153c250, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2001b6b7, "set_nlink" },
	{ 0x2c516e85, "file_update_time" },
	{ 0x148445b1, "setattr_copy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e9387a4, "kill_pid" },
	{ 0xd244ceb6, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x324f6ff8, "fput" },
	{ 0x8876bd64, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xe06c92a1, "file_write_and_wait_range" },
	{ 0x95de53da, "inode_init_once" },
	{ 0x8b484315, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb5946717, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xbec6ca54, "d_alloc" },
	{ 0x22a40f48, "truncate_inode_pages_final" },
	{ 0x511feb36, "make_kuid" },
	{ 0x45d5b4ac, "load_nls" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x85f5391e, "mnt_want_write_file" },
	{ 0x6ed2f403, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x14557819, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe9aaf799, "vm_event_states" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3308da18, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf352023f, "memory_cgrp_subsys_enabled_key" },
	{ 0x1e1a46d4, "kmem_cache_create" },
	{ 0xcf1fd500, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf2a24fe7, "d_hash_and_lookup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xaec3ca8, "find_get_pid" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c395c78, "iunique" },
	{ 0x380dc9d9, "page_get_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57de179b, "load_nls_default" },
	{ 0x9186c050, "sync_filesystem" },
	{ 0xe527d502, "d_make_root" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0x7ae654dd, "unregister_filesystem" },
	{ 0xe75ac737, "init_special_inode" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x799cbdc4, "new_inode" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6ee336b, "clear_inode" },
	{ 0x632bd52c, "_copy_to_iter" },
	{ 0x18430e98, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0d11d32, "__put_page" },
	{ 0xb4420089, "setattr_prepare" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A3CBE3C21AFFA3135C0E674");