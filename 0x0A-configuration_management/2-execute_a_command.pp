#  creates a manifest file that kills a process named killmenow
exec { 'kill_killmenow_process':
  command => '/usr/bin/pkill -f killmenow',
}
