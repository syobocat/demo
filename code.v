@[export: 'func']
fn func() {
	println('Begin DLL')
	for i in 0 .. 10 {
		println('${i}')
	}
	println('End DLL')
}
